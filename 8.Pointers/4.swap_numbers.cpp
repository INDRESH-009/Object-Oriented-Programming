//swap 2 numbers by creating a swap function 
//We are using the call by refrence method to pass the address of the 2 numbers num1 and num2 , the using the derefrencing operator we are swapping the values using the temp variable
#include <iostream>
using namespace std;
void swap(int* a , int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int num1;
    int num2;
    cout<<"Enter num1 and num2 : ";
    cin>>num1>>num2;
    cout<<"Before swap :\nnum1:"<<num1<<"\nnum2:"<<num2<<endl;
    swap(&num1,&num2);
    cout<<"After swap :\nnum1:"<<num1<<"\nnum2:"<<num2<<endl;

}