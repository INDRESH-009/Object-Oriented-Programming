/* Just like normal variables, Arrays in c++ can also be passed to a function as an argument, but in C++ whenever we pass an array as a function argument then it is always treated as a pointer by a function. Pointers not only have the capability of storing the address of a single variable but they can also store the address of cells of an array.

Note: The array name is treated as the address to the first element of an array, hence we can use pointers to access the elements of arrays. */
#include <iostream>
using namespace std;
void display(int a[]){
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
void change(int b[],int index ,int val){
     b[index] = val;
}
int main(){
    int arr[5] = {1,2,3,4,5};
    display(arr);
    change(arr,2,100);
    display(arr);
}
//From the above program we can see that the changes made using the change function is directly affecting the array passsed as argument viz arr , so it shows that array is always passed by refrence to the fucntion , and the array name also acts like a pointer to the address of the 1st byte of the 1st element

