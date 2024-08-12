//PASS BY VALUE AND PASS BY REFRENCE 
/* Pass by value means that when you pass a variable to a function, a copy of the variable's value is made. This means the function works with a separate copy, and changes made to it do not affect the original variable. In contrast, pass by reference means that the function receives a reference (or address) to the actual variable, so any changes made to the parameter within the function will affect the original variable itself.

 */

#include <iostream>
using namespace std;
//PASS BY VALUE 
int add(int a,int b){   
    return a+b;
}
//PASS BY REFRENCE
int sub(int* a,int* b){
    return *a-*b;
}
//PASS BY ALIASING
int mul(int &a , int &b){
    return a*b;
}
int main(){
    int num1 = 10;
    int num2 = 13;
    int sum = add(num1,num2);       //value of num1 and num2 is passed 
    int dif = sub(&num1,&num2);     //the address of num1 and num2 is passed 
    int multiply = mul(num1,num2);  //the address of num1 and num2 is passed by alias as per fn definition
    cout<<"The sum is : "<<sum<<endl;
    cout<<"The difference is : "<<dif<<endl;
    cout<<"The product is : "<<multiply<<endl;

} 


//PASS BY VALUE 

//In pass by value the concept is when we call a function and give arguments , we are actually passing the value of the variabel and not the variable itself . So here num1 and num2 are variables in the main function with values of 10 and 13 respectively . When we give them as arguments in the function add , new memory location called a and b is created and only the value fo the variabels num1 and num2 is stored in a and b. This is called pass  by value. 
//New memory locations are being created when we call the add function because the function definition is written in such a way that it accepts a  value and stores in the variable a and b .



//PASS BY REFRENCE 

//There is an another way to write the function definition such that it accepts the address of the variable , so value is not being given but the actual variable is being refrence here , this is called call by refrence . 
//In pass by refrence if we do any changes to the value of the refrence variable , it changes it directly , but in pass by value , since we are only passing the value , there will be chanegs only in the local variable and not to the variable from where the value is passed 



//PASS BY REFRENCE BY ALIASING METHOD : 

/* Pass by reference (or aliasing) allows a function to access the original value of a variable by using its address rather than a copy. This means that if the function modifies the variable, the change is reflected outside the function as well. Aliasing occurs when multiple names reference the same data, making it possible for one reference to affect the other. */
