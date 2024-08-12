/* Note on Pointers
 1. Pointers is an exclusive concept for C and C++
 2. Understanding memory allocation for a variable 
        Whenever we declare a variable , we give the datatype followed by variable name . Each datatype occupies a specific amount of memory.This memory is allocated for that particular variable name.
        check the sizeof a particular dataype : use sizeof(dtype) operator .

 */
#include <iostream>
using namespace std;
int main(){
    //1 byte = 8 bits -> can store 2⁸ = 256 characters   
    //4 byte = 32 bits -> can store 2³² = 4294967296 characters
    //8 byte = 64 bits -> can store 2⁶⁴ = 18446744073709551616 characters 
    cout<<sizeof(char)<<endl;   //char - 1byte
    cout<<sizeof(bool)<<endl;   //bool - 1byte
    cout<<sizeof(int)<<endl;    //int - 4byte
    cout<<sizeof(float)<<endl;  //float - 4byte
    cout<<sizeof(double)<<endl; //double - 8byte
    cout<<sizeof(long)<<endl;   //long - 8byte


/* Address of a variable 
 1. Each individual bytes in the memory has a particular address 
 2. Whenever we create a variable of a particular datatype say int , 4 bytes are allocated in the memory which are in contiguous manner . The address of this int variable is denoted by the address of the 1st byte. 
 3. We can see the address of a variable using the address-of (&) operator   
 4.Note that each time you run the  program , you get different address even though the program is exactly the same. The reason for this is that , until you run the code , the program is merely a piece of text. When we run the program , the compilation occurs and each time memory is allocated in a random fashion based on the availablity. Thus we get different address. 
 */
    int x;
    cout<<&x<<endl; //0x16db1b00c say is the address of the variable x , it is actually the address of the 1st byte of the 4 bytes allocated for int x .  
/* Defining pointers 
 1. A pointer is a variable that stores the memory address of another variable 
 2. Syntax - dtype* ptr_name = &var_name;

*/
    int a = 10;
    int* ptra = &a;
    cout<<ptra<<endl;
    float b = 3.45;
    float* ptrb = &b;
    cout<<ptrb<<endl;
    bool c = true;
    bool* ptrc = &c;
    cout<<ptrc<<endl;
    char d = 'a';
    char* ptrd = &d;
    cout<<ptrd<<endl;






}