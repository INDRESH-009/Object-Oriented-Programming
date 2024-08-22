/* 
 Leetcode Question 75 :  

 for a given array with elements 0's 1's and 2's sort it such that its in ascending order 
 For this we will be using the two pass method 
*/
#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //get he size of vector 
    int n;
    cout<<"Enter the size fo array : ";
    cin>>n;
    //get input of vector 
    vector<int> v(n);
    cout<<"Enter the input for array : ";
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        v[i] = input;
    }
    //display before sorting
    cout<<"before sorting : ";
    display(v);
    //1st pass - count no.of 0,1 and 2
    int zero = 0, one = 0,two = 0;
    for(int i=0;i<n;i++){
        if(v[i]==0) zero++;
        else if(v[i]==1)    one++;
        else if(v[i]==2)    two++;
    }
    //2nd pass - rewrite the value 
    for(int i=0;i<n;i++){
        if(i<zero)  v[i]=0;
        else if(i>(zero-1)&& i<(n-two))  v[i]=1;
        else    v[i]=2;
    }
    //display after sorting
    cout<<"after sorting : ";
    display(v);

}