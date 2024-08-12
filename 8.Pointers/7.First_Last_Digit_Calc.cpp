/* Question 02: Write a function to find out the first and last digit of a number without returning anything
for a given input number the algorithm to find the 1st and last digit is 

        1. To find the last digit : num%10
            eg :  12345%10 - divides 12345 by 10 gives remainder as 5 viz the last digit
        2. To find the first digit : num/10 till num>=9
            eg : while(num>=9)  num/10;
            1st iteration(12345>=9)  : 12345/10 = 1234
            2nd iteration(1234>=9)   : 12345/10 = 123
            3rd iteration(123>=9)    : 12345/10 = 12
            4th iteration(12>=9)     : 12345/10 = 1
            5th iteration(1>=9)      : loop exited
 */
//since we are not allowed to return anything we are using pointers to directly make chnges in the main variable 
#include <iostream>
using namespace std;
int firstDigit;
int* ptr_firstDigit = &firstDigit;
int lastDigit;
int* ptr_lastDigit = &lastDigit;

void method(int x){
    *ptr_lastDigit = x%10;
    while(x>9){
        x = x/10;
    }
    *ptr_firstDigit = x;
}
int main(){
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    method(num);    //fn call
    cout<<"The first digit is : "<<firstDigit<<" and the last digit is : "<<lastDigit<<endl;
}