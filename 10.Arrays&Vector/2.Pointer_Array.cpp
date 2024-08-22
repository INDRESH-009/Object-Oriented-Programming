#include <iostream>
using namespace std;
int main(){

    /*Topic 01 -  How to use Pointers with Arrays 
     *      1. When we use normal variables we declare pointers by assigning the pointer variable to the address of the variable like [int* ptr = &x]
            2. In case of assigning pointers to arrays we have a different approch 
            3. Wkt the array name itself is like a pointer to the 1st element of the array 
            4. So instead of giving int* ptr = &arr (which gives error) we shd give int* ptr = arr;
            5. int* ptr = arr;
                arr: When you use the name of an array (e.g., arr), it decays to a pointer to its first element (&arr[0]). So, int* ptr = arr; is valid because arr is equivalent to &arr[0], and ptr is a pointer to an int.
            6. int* ptr = &arr;
                This is incorrect because :-)
                &arr: This expression represents the address of the entire array, not just the first element. The type of &arr is int (*)[n], where n is the size of the array. This is a pointer to an array of n integers, not just an integer. Therefore, you cannot assign &arr to a pointer of type int*.
            7.  Conclusion : arr = &arr[0]
    */
    int arr[] = {12,1,2,1,3};
    //NOTE ::::
    //Pointer to the first element:
    int* ptr_1 = arr;     // Valid: `arr` is of type `int*` (points to `int`).
    int* ptr_2 = &arr[0]; // Also valid and equivalent to the above.
    //Pointer to the entire array 
    int (*ptr_3)[5] = &arr; // Valid: `ptr3` is a pointer to an array of 5 integers.

    /* Topic 02 - Pointers of array have entire access to the original array 
            1. When we use pointer to store the address of the array , we are essentially giving the pointer the full access to the memory location of the array , so it can access the elemnts of the array and make changes in it.
            2. We can access and manipuate the elements fo the array using pointers itself
     */
    char arr2[] = {'a','b','c'};
    char* ptr_arr2 = arr2;
    //accessing elements using pointer ptr_arr2
    cout<<ptr_arr2[1]<<endl;
    //printing all elements using loop 
    for(int i=0;i<3;i++){
        cout<<ptr_arr2[i]<<" ";  
    }
    cout<<endl;
    //alternate method for printing the array which has a pointer 
    for(int i=0;i<3;i++){
        cout<<*ptr_arr2<<" ";
        ptr_arr2++; //each iteration , the pointer's pointing address changes so to reset it finally write ptr_arr2 = arr2;    
    }
    ptr_arr2 = arr2;
    cout<<endl;
    //mutating the value of arr2 using pointer 
    ptr_arr2[1] = '@';
    cout<<ptr_arr2[1]<<endl;
    //*ptr_arr2 fetches the value of the arr2[0] , so it mutataes the 1st index
    *ptr_arr2 = '%';
    cout<<*ptr_arr2<<endl;  
}