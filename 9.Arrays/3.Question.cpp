//Given an array of marks of student , if the marks of student is less than 35 print its roll number (roll numbere here refers to the index fo the array)
#include <iostream>
using namespace std;
int main(){
    int arr[10];
    //getting input from user
    cout<<"Enter the marks of 10 students : ";
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    //checking the condition
    for(int i=0;i<10;i++){
        if(arr[i]<35)   cout<<i<<endl;
    }
}