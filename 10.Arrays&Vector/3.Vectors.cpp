/*  Note on Vector : 
 1. Array is very fast and efficient for retriving data but only problem is it has a fixed size 
 2. To solve this problem we use vector 
 3. Vector is a dynamic array and to use it you shd use header file #include <vector>
 4. Syntax - vector<dtype> array_name; 
 5. The advantage in vector is we can add new eleemnts in an array without changing its size explicitly
 6. Technically speaking , lets assuse that out vector has a maximum of 4 storage units and it is filled with numbers 1,2,3,4
 7. If i want to push another element into this vector then the working of vector is : 
    If the initial size of array is filled then a new memory location for the same array is created with double the space and the elements from the previous array is copied to the new one and then the extra number is added    
 8. So here , the vector 1,2,3,4 is present and has a maximum size of 4 , if i want to add the 5th element then 1st the array size doubles in anew memory location from 4 to 8 and then the elements from the 4-sized vector is transfered into this new one and then the exta digit "5" is added .
 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //vector declaration - need not mention size
    vector<int> num;    //0 memory location
    //vector initialisation
    num.push_back(10);  //1 memory location
    num.push_back(20);  //2 memory location - memory dobled 
    num.push_back(30);  //4 memory location - memory doubled
    num.push_back(40);  //4 memory location - filling the free memory of the prev step 
    //accesing the members of a vector 
    cout<<num[0]<<endl;
    //mutating/updating values in vector
    num[0] = 100;
    

/* How vector works 
 *  1. Initially we have 0 memory location allcoated to the vector during declaring
    2. So after declaring the vector we cant use indexing to assign values cuz at the first place there is no memory allocated
    3. So we use the pushback method to add elements in the vector 
    4. Push back always creates double the memory spaces after the allcated memory is filled.
        1. 0 to 1 
        2. 1 to 2 
        3. 2 to 4
        4. 4 to 8
        5. 8 to 16
 */

    //What if we are going to print the value of the unassigned vector memory location - The it prints the garbage value 
    vector<char16_t> ch;
    ch.push_back('a');  //1 memory allcoated
    ch.push_back('b');  //2 memory allcoated 
    ch.push_back('c');  //4 memory allocated 
    //Now the vecctor ch have 4 memory allcoated but uses only 3 , so the 4th memeoy location has a garbage value in it , lets print it 
    cout<<ch[3];
} 