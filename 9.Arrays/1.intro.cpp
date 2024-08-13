#include <iostream>
using namespace std;
int main(){
    /* NOTE ON ARRAY 
     1. An array is a collection of elements of similar dataype which are located at contiguous memory location
     2. This allows efficient access and manipulation of data when working with large datasets , its also helps in sorting and organising data.

     3. Syntax of declaring an array : 
        dtype arr_name[size];   //declaring array without initialsing requires you to give its size 

        //Array with infered size
        dtype arr_name = {1,2,3,4,5};   
        //declaring array with initialsiation dioesnt need us to give the array size as it can be infered by the compiler.

    4. indexing in arrays, accessing the elements of an array 
        In arrays the indexing of elements occur from 0 to n-1 where n is the number of eleemnts in the array.
        To access the elements of an array we have use the array_name[index] as syntax

     */
    int arr[5];    //array declared
    //after declaring an array to initialise the elements we have to access it one by one and give its values
    //arr[] = {1,234,334,412,5,6,7,8,9,10}; is not valid

    //accessing array values
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 5;

    //declaring and intitialising array . No.of memeory req is infered in this case 
    int arr2[] = {2,4,6,8};
    cout<<arr2[3]<<endl;    //arr2's 3rd index value is 8



}