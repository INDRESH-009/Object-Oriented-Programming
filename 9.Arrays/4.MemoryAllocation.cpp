/* In arrays the memory is allocated in contiguous manner , so if we know the address of the 1st element we can find the address of the subsequent elements in the array . So array is very efficient in retriving data but is not efficient in the aspect of memeory as it always searches for contiguous locations.
 *

 We can prove that the memory locations of a array is contiguous by printing the address of each index of the array and analysing them using hexadecimal system 

 hexadecimal system - 0 1 2 3 4 5 6 7 8 9 a b c d e f
 */
#include <iostream>
using namespace std;
int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<&arr[i]<<endl;
    }
        /*
        //compare the table to conclude that each memory location is continuous
        0x16f68afe0 - arr[0]    - e0 e1 e2 e3
        0x16f68afe4 - arr[1]    - e4 e5 e6 e7
        0x16f68afe8 - arr[2]    - e8 e9 ea eb
        0x16f68afec - arr[3]    - ec ed ee ef
        0x16f68aff0 - arr[4]    - f0 f1 f2 f3
        */

    cout<<"Print the adress of arr using & operator : ";
    cout<<&arr<<endl;
    cout<<"Printing the array arr directly : ";
    cout<<arr<<endl;
    //In both these instance we get the address of the 1st byte of the 0th index of the array . So arr also stores the address of itself
}
