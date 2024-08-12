#include <iostream>
using namespace std;

int main(){

    //Question 01 : 
    int a =15;
    int *ptr1 = &a;
    //pre-increment occurs 1st before assigning. *ptr implies variable a . So incrementing it will make a = 16. Then the value of a is assigned to b which makes b = 16
    int b = ++(*ptr1);
    cout<<"a: "<<a<<' '<<"b: "<<b<<endl;    //a:16 and b:16

    int x =15;
    int *ptr2 = &x;
    //post-increment occurs after assigning. So y=15 is assigned then , *ptr implies variable x . So incrementing it will make x = 16. 
    int y =(*ptr2)++;
    cout<<"x: "<<x<<' '<<"y: "<<y<<endl;    //x:16 and y:15


}
