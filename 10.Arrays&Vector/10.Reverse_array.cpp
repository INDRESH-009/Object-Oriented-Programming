//write a program to copy the contents of one array into another in the reverse order 
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
    //create arr2 to store reverse of arr1
    vector<int> arr2;
    for(int i=arr1.size()-1;i>=0;i--){
        arr2.push_back(arr1[i]);
    }
    //print the arr2 viz reversed array of arr1 
    for(int i=0;i<arr2.size();i++){
        cout<<arr2[i]<<" ";
    }

}