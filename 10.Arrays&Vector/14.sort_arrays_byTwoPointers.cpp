/* What is you want to sort an array of 0's and 1's by only traversing the array 1 time , in this case you cant use the two pass method , so now we will use two pointers to achieve this as learnt in file no . 11 - two_pointer.cpp  */

#include <iostream>
#include <vector>
using namespace std;
//display function
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
//get input for vector - pass the vector by refrence to make changes in the original vector  
void getInput(vector<int>& v,int size){
    int input;
    for(int i=0;i<size;i++){
        cin>>input;
        v[i]=input;    
    }
}
int main(){
    //get the size of vector;
    int size;
    cout<<"Enter the size of vector : ";
    cin>>size;
    //vector declaration
    vector<int> vec(size);
    //get user input 
    getInput(vec,size);
    //display before sorting
    cout<<"The vector before sorting : ";
    display(vec);
    int first_pointer = 0;
    int last_pointer = vec.size()-1;
    int temp;
    /* How to write the condition to solve this problem 
     *      Our aim is to have 0 at front and 1 at back
     *      1. if the pointer at first is 1 and pointer at last is 0 then swap them , after swapping do i++,j--;
            2. if pointer at first is 0 , then just increment , i++
            3. if pointer at last is 1 , then just decrement , j--
            Also follow this order to execute correctly
     */
    while(first_pointer < last_pointer) {
        if(vec[first_pointer] == 1 && vec[last_pointer] == 0) {
            // Swap the elements
            swap(vec[first_pointer], vec[last_pointer]);
            first_pointer++;
            last_pointer--;
        } 
        else {
            if(vec[first_pointer] == 0) first_pointer++;
            if(vec[last_pointer] == 1) last_pointer--;
        }
    }
    display(vec);    
}