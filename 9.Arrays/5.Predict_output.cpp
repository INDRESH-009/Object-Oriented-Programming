#include <iostream>
using namespace std;
int main(){
    //predict the output of the following code ; 
    int num[26];
    num[0] = 100;
    num[25] = 200;
    int temp = num[25];
    num[25] = num[0];
    num[0] = temp;
    cout<<endl<<num[0]<<" "<<num[25]<<endl;

    //calculate the sum of all the elements in the array 
    int sum_arr[5];
    //getting user input 
    cout<<"Enter the elements of the array to add : ";
    for(int i=0;i<5;i++){
        cin>>sum_arr[i];
    }
    //initialise sum to 0
    int sum = 0;
    for(int i=0;i<5;i++){
        sum += sum_arr[i];
    }
    cout<<"The sum of all the elements of the array is : "<<sum;

}