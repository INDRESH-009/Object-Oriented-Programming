/*
 Question : Get an array as input from the user and take a target number x , find the doublets of indeces whose sum of the pair will give us the target : 

 To achieve this lket us take the array as input in the form of vector as we dont know its size , let the vector be v
 Then lets take the target number x 
 Now to achieve the solution we have to follow the folling algorithm  :
    1. Use 2 for loops 
    2. The outer for loop will keep a particular index as constant(say i) and the inner for loop will iterate through the entire array starting from i and each time we check if the value of v[i] + v[j] == x 
    3. If the condition is true print the pair (i,j) , else move to the next iteration 

 eg - v = [1,2,3,3,4,2,3,4,2,1]
      x = 5 

      1st iteration : 
      v[i] = 1
      v[j] = 2,3,3,4,2,3,4,2,1 
      where ever v[i]+v[j] == 5 we print the idex of it 

      2nd iteration:
      v[i] = 2
      v[j] = 3,3,4,2,3,4,2,1 
      where ever v[i]+v[j] == 5 we print the idex of it
      and so on....

 */
#include <iostream>
#include <vector>
using namespace std;
int main(){
    //get input of vector 
    cout<<"Enter the elements of the array (press -1 to terminate): ";
    vector<int> v;
    int value;
    while(cin>>value && value!=-1){
        v.push_back(value);
    }
    //get target value 
    cout<<"Enter the number x whose doblet is needed to be found : ";
    int x;
    cin>>x;
    //running loop through the vector twice 
    for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[i]+v[j]==x)  cout<<i<<","<<j<<endl;
        }
    }
}