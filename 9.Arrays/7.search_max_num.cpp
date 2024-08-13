#include <iostream>
using namespace std;
int main(){
    // to find the max of the numberspresent in the array 
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
    //performing searching 
    for(int i=0;i<n;i++){
        if(arr[i]>max)  max = arr[i];
    }
    //print max
    cout<<"The max value of the elements in the array is : "<<max;
}