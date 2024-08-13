//get an array and number x as input and find the number of elemenyts in the array which has value grater than x
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
    //get the value of x as input 
    int x;
    cout<<"Enter the number x : ";
    cin>>x;
    //initiase count variable 
    int count = 0;
    //perform linear search
    for(int i=0;i<n;i++){
        if(arr[i]>x)    count++;
    }
    //print the solution
    cout<<"The number of elements whose value is greater than "<<x<<" is : "<<count;
}