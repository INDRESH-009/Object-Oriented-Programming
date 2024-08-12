#include <iostream>
using namespace std;
int main(){
    //num and ptr_num careated , num stores value 10 and ptr_num stores the address of num
    int num = 10;
    int* ptr_num = &num;
    //using pointer ptr_num
    cout<<ptr_num<<endl;    //prints the address of the num variable 
    //to access the value of the num varabile we can use the derefrencing operator to go to that address and get the value without calling the variable num  itself 
    cout<<*ptr_num<<endl;   //derefrences to the address in ptr_num and takes its value - here its 10
    //update the value of num using the pointer 
    *ptr_num = 100;
    cout<<"The updated value of num is : "<<num<<endl;

    //Write a program to calculate the sum of 2 numbers using pointers 
    int num1,num2;
    //int *ptr_num1 = &num1 , *ptr_num2 = &num2;  //this is also valid but not recommended 
    int* ptr_num1 = &num1;
    int* ptr_num2 = &num2;
    cout<<"Enter the 1st number : ";
    cin>>*ptr_num1; //storing the input in num1 using derefrencing operator 
    cout<<"Enter the 2nd number : ";
    cin>>*ptr_num2; //storing the value of num2 using derefrencing operator
    cout<<"The sum is : "<<num1+num2<<endl;

}