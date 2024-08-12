/* A null pointer has a reserved value that is called a null pointer constant for indicating that the pointer does not point to any valid object or function. 
 a null pointer is declared like other pointer variables using dtype* ptr_name; syntax but if 

        1. The value of ptr is  ot initialise - it shows some random address in the memory and upon derefrencing it shows a garbage value 
        2. To make the pointer null we have to explicitly initialise it to the value - NULL 
        3. It can also be initiualised to 0 or the null character '\0' whose ascii value is also 0
*/
#include <iostream>
using namespace std;
int main(){
    //unitialised pointer - gives random address
    int* ptr1;
    cout<<ptr1<<endl;
    //null pointer made by equating to null keyword - address is 0x0
    int* ptr2 = NULL;
    cout<<ptr2<<endl;
    //null pointer made by equating to 0 - address is 0x0
    int* ptr3 = 0;
    cout<<ptr3<<endl;
    //null pointer made by equating to null character '\0' - address is 0x0
    int* ptr4 = '\0';
    cout<<ptr4<<endl;



    //DOUBLE POINTER
    /* A double pointer in C++ is a pointer that holds the address of another pointer. It is declared using two asterisks (**). For example, int **p declares a double pointer p that can point to an integer pointer. This mechanism allows for the creation of dynamic multidimensional arrays or passing pointers by reference. */

    int a = 10;               //address of a - a600           value in a - 10
    int* ptr_a = &a;          //address of ptr_a - a700       value in ptr_a - a600       value of *ptr_a = 10
    int** ptr_b = &ptr_a;     //address of ptr_b - a800       value in ptr_b - a700       value of *ptr_b = a600
                              //value of **ptr_b - 10
    cout<<a<<endl;
    cout<<ptr_a<<endl;
    cout<<ptr_b<<endl;
}
