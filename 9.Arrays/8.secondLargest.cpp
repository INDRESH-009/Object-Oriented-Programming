#include <iostream>
using namespace std;
int main(){
    //get the size of array 
    int n;
    cout<<"Enter the size of the array";
    cin>>n;
    //declare the array
    int arr[n];
    //get input for the array 
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //initiase max variable to the minimum value 
    int max = INT_MIN;
    int index;
    //performing searching 
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            index = i;
        } 
    }
    //This method is not recomended : 
    /* 
     
     //change the value of max at its index 
    int temp;
    temp = arr[index];
    arr[index] = INT_MIN;
     */


    
    //perform search for 2md time 
    int max2 = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max2 && arr[i]!=max){
            max2 = arr[i];
        } 
    }
    //print the max2 value 
    cout<<"The 2nd max element is "<<max2;
}
