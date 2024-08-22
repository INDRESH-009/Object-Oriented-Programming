//write a program to reverse the array without creating a new array

/* We are going to solve this problem using the 2 pointer technique 
 * 
 In the two-pointer technique, you use two pointers (or indices) that start at different ends of a data structure, like an array or a vector, and move towards each other. This technique is commonly used for problems involving searching, sorting, or reversing data within an array or a list.
 */
#include<iostream>
#include<vector>
using namespace std;

int main(){
    //get the input of the array
    vector<int> arr1;
    //get size of array 
    int x;
    cout<<"Enter the array size : ";
    cin>>x;
    //get input of vector 
    cout<<"Enter the elemets of the array : ";
    int input;
    for(int i=0;i<x;i++){
        cin>>input;
        arr1.push_back(input);
    }

    //make 2 integers which accounts for the 1st and last index , from there in every iteration , move i one step further and j 1 step backward till they cross each other and in each iteration , swap their values , so we are reversing the array without using a new one.
    int i = 0;
    int j = arr1.size()-1;
    int temp;
    for(int x=0;x<=arr1.size();x++){
        if(i<j){
            temp = arr1[i];
            arr1[i] = arr1[j];
            arr1[j] = temp;
            i++;
            j--;
        }
        }
    //print arr1
    for(int i=0;i<=arr1.size()-1;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;

    /* REVERSE IN PARTS : 
     *      1. In the above example we have seen that reversing of the entore array is taking place , but what is we want to reverse only a particular part of an array
            2. To do that lets see an exqample 
            3. Eg - arr = [1,2,3,4,5,6]
                i want to reverse the values only from index 1 to 4 then my array looks like : [1,5,4,3,2,6]
            4. To achieve this we are going to =simply change the values of 
                    i from 0 to 1 
                    j from arr.size()-1 to arr.size()-2
                    and perform the two pointer technique for reversing the array 
     */

    vector<int> arr(5);
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;
    //reverse by part from index 1 to 3 - exoected array - [10,40,30,20,50]
    int i1=1;
    int j1=3;
    int temp1;
    for(int x=0;x<=arr.size()-1;x++){
        if(i1<j1){
            temp1 = arr[i1];
            arr[i1] = arr[j1];
            arr[j1] = temp1;
            i1++;
            j1--;
        }
    }
    //print arr
    for(int i=0;i<=arr.size()-1;i++){
        cout<<arr[i]<<" ";
    }

}