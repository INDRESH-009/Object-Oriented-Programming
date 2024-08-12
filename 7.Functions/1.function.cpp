/* Note on function
 1. A function is a collection of program statements viz grouped together and given a name. This unit can be invoked from other parts of the program 
 2.Functions aid in conceptual organisation of a large program into smaller logics 
 3. The use of functions help us to reduce the program size by avoiding repeting code logics . 
 4. The functions code is stored only in one place int he memory even though it is called and executed several times 
 */

//Function to print a star line 
#include <iostream>
using namespace std;
void starLine();    //function declaration
int main(){
    starLine();//function call
    cout<<"DataType             Range"<<endl;
    starLine();
    cout<<"char                 -128 to 127"<<endl;
    cout<<"short                -32768 to 32767"<<endl;
    cout<<"int                  System Dependent"<<endl;
    cout<<"long                 -2,147,483,648 to 2,147,483,647"<<endl;
    starLine();
}
void starLine(){     //function definition
    for(int i=0;i<45;i++){
        cout<<"*"; 
    }
    cout<<endl;
} 
//***************************************************************************************** */
/* Component        Purpose                                             Example 
 *****************************************************************************************
Declaration     Specifies function name, argument                       void func();
(prototype)     types, and return value. Alerts
                compiler (and programmer) that a
                function is coming up later.
*****************************************************************************************
Call            Causes the function to be executed.                     func();
Definition      The function itself. Contains the                       void func(){
                lines of code that constitute                           //lines of code }
                the function.                                           
*****************************************************************************************                                   Declarator      First line of definition.                               void func() 
*****************************************************************************************    
*/