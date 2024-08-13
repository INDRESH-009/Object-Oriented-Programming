#include <iostream>
using namespace std;
int main(){

    //sizeof operator : 
    /* How to find the length of an unknown array using sizeof operator  
     sizeof operator is used to find how many bytes fi memory location has been occupied by a identifier
    */
   int arr[] = {1,2,3,4,5,6};
   //sizeof(arr);           //total bytes occupied by arr - 6 elements of int = 6*4 = 24;
   //sizeof(arr[0]);        //1st element of the array helps to identify the dtype of array - here its 4 
   int number_of_elements = sizeof(arr)/sizeof(arr[0]); 






    //getting input from user for an array can be done using the for loop and the values can be stored in each memory location using indeces 
    int arr1[5];
    cout<<"Enter the values of elemnts in the array : ";
     //a = sizeof(arr) = 4(size of int)*5(no.of elements) = 20
     //b = sizeof(arr[0]) = 4(sizeof int)
     //(a/b) = 4;
    int size = sizeof(arr1)/sizeof(arr1[0]); 
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    //printing the value fo each indeces of the array can also be done using the for loop 
    for(int i=0;i<size;i++){
        cout<<arr1[i]<<endl;
    }
}