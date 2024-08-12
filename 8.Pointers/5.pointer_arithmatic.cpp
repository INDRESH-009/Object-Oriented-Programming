#include <iostream>
using namespace std;
int main(){
    int x = 10;
    x++;
    cout<<x<<endl;
    int* ptr = &x;
    cout<<ptr<<endl;    //say the address is 0x16b136fec
    ptr++;
    cout<<ptr<<endl;    //the after incrementing once the adress is 0x16b136ff0
    cout<<*ptr<<endl;   //by incrementing we move the pointer to the next memory location but not the value , so when the pointer is incremented , it points to the new memory location and by derefring it we get the garbage value stored in it
    bool flag = true;
    bool* ptr_flag = &flag;
    cout<<ptr_flag<<endl;    //say the address is 0x16ce12fdf
    ptr_flag--;
    cout<<ptr_flag<<endl;    //the after incrementing once the adress is 0x16ce12fe0
}
/* When we increment a normal int variable , its value is incremented by 1 but if you increment a pointer , then the pointer , which indicates the memory is also incremented by 1 step. For int , it takes 4 bytes , so if you increment an integer pointer variable once , it will move 4 memory locations furthur . So pointer increments in terms of memory locations  
  
 1. The memory address is always in the hexadecimal format - in hexadecimal format there are 16 characters here the numnbers are from from (0 to 9) and (a to f).
 2. Hexadecimal characters -  0 1 2 3 4 5 6 7 8 9 a b c d e f
 3. Lets take an example of the above int variable - 
        1. initial address last 2 digits  - ec - viz the address of the 1st memory location of the 4 bits
        2. int takes 4 bits so the address of all 4 bits is - ec ed ee ef . 
        3. If we increment the pointer variable by 1 then it moves to the adjacent 4 bit group. So the address become - f0 because after the 4 bits of ec is crossed (ec,ed,ee,ef) - the next address is f0,f1,f2,f3 viz the new 4 bits of the memory location of x.
        4. For bool dtype - it occupies only 1 byte so when u decrement it,it moves to the previous bit 
        5. Initially &flag = df , prev bit is de viz the next adress if flag after decrementing

*/




