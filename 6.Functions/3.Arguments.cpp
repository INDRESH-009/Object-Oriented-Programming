/* Notes on Arguments 
 1. A piece of data thta spassed to a function is called arguments
 2. These arguments are used by the function to perform operations on it to compute a particular task
 3. The variables used in the function declaration viz not actual values but containers to store them is called formal parameters 
 4. The actual values that is supplied to the function call is called actual parameters or arguments
 5. The following code contains function that are 
            1. Called using constant arguments - charLine
            2. Called using variable arguments - charLineUser
*/

//create a function that prints any character ch , n number of times where ch and n are arguments
#include <iostream>
using namespace std;
//function declaration
void charLine(char ch,int n);    
void charLineUser(char chUser,int nUser);  
//main function 
int main(){
    //function call with constant arguments
    charLine('$',40);  

    //function call with arguments as variables     
    char chInput;
    int nInput;
    cout<<"Enter the character to be printed : ";
    cin>>chInput;
    cout<<"Enter the number of times it is to be printed : ";
    cin>>nInput;
    charLineUser(chInput,nInput);

}
//PASSING CONSTANTS AS ARGUMENTS 
void charLine(char ch,int n){ //function definition
    for(int i=0;i<=n;i++){
        cout<<ch;
    }
    cout<<endl;
}
//PASSING VARIABLES AS ARGUMENTS 
void charLineUser(char chUser , int nUser){
    for(int i=0;i<=nUser;i++){
        cout<<chUser;
    }
    cout<<endl;
}


