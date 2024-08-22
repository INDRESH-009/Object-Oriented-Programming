/* Rotating the array means that we shift the elements last to first and the number of eleemnts to be shifted depends on the value k which is a user input , it says how many eleemnts to be rotated 
 For example lets take the array : 1,3,5,2,8,6,9 
 let k = 4 , that means shift the last 4 elements to first 
 expected rotated array : 2,8,6,9,1,3,5

 let k > no.of.elements , the no of rotations to be done is k%n times 
 let k = 30; The no of eleemnts in array is : 7
 no of rotations is 30%7 = 4 complete rotation and 2 part rotation
 one complete rotation will give the same array as the parent array , so  the 4 complete roation makes no change , hence here k is equal to 2 

 for k=2 the expected array is : 6,9,1,3,5,2,8
 
 Algorithm to perform this procedure :
 take the original array : 1,3,5,2,8,6,9
 k=4 , so make the single array into 2 parts , last 4 and the remaining 1st elements 
 part 1 : 1,3,5
 part 2 :2,8,6,9
 now perform reversing on part 1 and part2 individually and form an array
 expected array : 5,3,1,9,6,8,2

 now reverse the whole new array
 final ans : 2,8,6,9,1,3,5
 */

#include <iostream>
#include <vector>
using namespace std;
//rotateInPart function
void rotateInPart(int start,int end,vector<int>& v){
    for(int i=start;i<=end;i++){
        if(start<end){
            int temp = v[start];
            v[start] = v[end];
            v[end] = temp;
            start++;
            end--;
        }
    }
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //get size of vector
    cout<<"Enter the size of the vector : "<<endl;
    int n;
    cin>>n;
    //make a vector 
    vector<int> v(n);
    //get input 
    cout<<"Enter the elemnts of the array ; ";
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        v[i] = input;
    }
    //get the value of k for rotation
    cout<<" Enter the value of k for rotation : ";
    int k;
    cin>>k;
    //rotate in part the 1st abd the last half 
    //if k<n : then
        //part 1 -  start = 0 , end = v.size-1-k 
        //part 2 -  start = v.size-k , end = v.size-1
        if(k>n) k=k%n;
        rotateInPart(0,v.size()-1-k,v);
        rotateInPart(v.size()-k,v.size()-1,v);
    
    //now reverse the whole array 
    rotateInPart(0,v.size()-1,v);
    //display the rotated array
    display(v);
    

}