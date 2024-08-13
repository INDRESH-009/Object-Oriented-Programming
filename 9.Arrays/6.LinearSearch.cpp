//Find element x in the array , take the array and element x as input 
//This can be achieved using linear search , it works by looping over every items of an array and checking the condition
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
    //get the number to check 
    int x;
    cout<<"Enter the number to check in the array : ";
    cin>>x;
    //performing linear search 
    int index;
    bool flag = false;
    for(int i=0;i<n;i++){
        if(x==arr[i])   flag=true;
    }
    if(flag)    cout<<"The number is present";
    else cout<<"The number is not present ";
    
}