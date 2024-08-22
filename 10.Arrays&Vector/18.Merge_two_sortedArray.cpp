/* 
Merge 2 sorted array 
We are given with 2 sorted array , now we have to merge these 2 arrays to form a single merged array whose size is equal to the sum of the sizes of the two arrays 

Lets consider the 2 sorted arrays to be arr1 and arr2 
    arr1 = [1,3,5,10,17]
    arr2 = [2,4,7,8,9,19]
Now let the merged sorted array be arr3
    arr3 = [1,2,3,4,5,7,8,9,10,17,19]
To achieve this output we are going to use the 3 pointer method 
Let the 3 pointer be a,b and c , then the 
            1st pointer a points the 0th index of arr1
            2nd pointer b points the 0th index of arr2
            3rd pointer c points the 0th index of arr3


    Algorithm to Merge Two Sorted Arrays:

        1. Input the Arrays:  Receive two sorted arrays, arr1 and arr2, as input.
        2. Create Merged Array: Create a new array arr3 with a size equal to the sum of the sizes of arr1 and  arr2.
        3. Initialize Pointers: Initialize three pointers: a for arr1, b for arr2, and c for arr3. Set all pointers to 0 (pointing to the first element of each array).
        4. Merge Arrays: While both arrays have elements left (i.e., a < n and b < m):
        5. Compare the elements arr1[a] and arr2[b]. Copy the smaller element to arr3[c].
            Increment the pointer of the array from which the element was taken (a or b), and always increment c to move to the next position in arr3.
        6. Handle Remaining Elements: If any elements remain in arr1 (i.e., a < n), copy them to arr3 and increment the pointers (a and c) accordingly.
        If any elements remain in arr2 (i.e., b < m), copy them to arr3 and increment the pointers (b and c) accordingly.
        7. Output the Merged Array: The array arr3 now contains all elements from arr1 and arr2 in sorted order.


 */

#include <iostream>
#include <vector>
using namespace std;
void GetInput(vector<int>& v){
    int size = v.size();
    int input;
    for(int i=0;i<size;i++){
        cin>>input;
        v[i]=input;
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//create a function that returns a vector which merges 2 sorted arrays 
vector<int> Merge(vector<int>& v1,vector<int>& v2){
    int a=0,b=0,c=0;
    int n = v1.size();
    int m = v2.size();
    //creating arr3 to merge the sorted array 1 and 2 whose size is n+m
    vector<int> v3(m+n);
    while(a<n && b<m){
        if(v1[a]<v2[b]){
            v3[c] = v1[a];
            a++;
            c++;
        }
        else{
            v3[c] = v2[b];
            b++;
            c++;
        }
    }
    while(a<n){
        v3[c] = v1[a];
        a++;
        c++;
    }
    while(b<m){
        v3[c] = v2[b];
        b++;
        c++;
    }
    return v3;

}
int main(){
    //get the size of array 1
    cout<<"Enter the size of array 1 : ";
    int n;
    cin>>n;
    vector<int> arr1(n);
    //get input of array 1
    cout<<"Enter the input of elements for array 1 : ";
    GetInput(arr1);


    //get the size of array 2
    cout<<"Enter the size of array 2 : ";
    int m;
    cin>>m;
    vector<int> arr2(m);
    //get input of array 2
    cout<<"Enter the input of elements for array 2 : ";
    GetInput(arr2);


    //sorting arr1 and arr2
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    cout<<"The sorted array 1 is : ";
    display(arr1);
    cout<<"The sorted array 2 is : ";
    display(arr2);

    //store the merged vector int arr3
    vector<int> arr3 = Merge(arr1,arr2);
    //print arr3
    display(arr3);

}