/* Note on library functions 
 1. We have used Library functions like sqrt();
 2. But for such functions we did not write function declaration or definition
 3. This is because we have imported a header file to our program where 
        1. The declaration is in the header file (math.h for sqrt()) 
        2. The definition is compiled into executable code is in the library file that gets linked automatically when we compile
 4.Therefore when we use library function we dont need to write the declaration and definition but our own methods shd contain them
 */
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int num = 10;
    cout<<sqrt(num)<<endl;
    cout<<exp(num)<<endl;
    cout<<log(num)<<endl;

}

