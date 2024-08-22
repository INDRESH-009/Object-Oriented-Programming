/* Sort the arrays of 0's and 1's 
        1. For a array v = [1,1,0,1,0,0,1,0,0,0]
           sorted array v = [0,0,0,0,0,0,1,1,1,1] 
        2. To do this we can simply use the 
            sort(v.begin(),v.end()); method but lets do it manually . 
        3. This can be achieved by two pass method 
        4. In two pass method we go through an arrray 2 time 
            -> 1st time - use a counter variable to count no.of 0's and 1's
            -> 2nd time - rewrite the values of the array with the no.of 0's and then the no.of 1's
*/

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
    //two pass method 
    int noOfZero = 0 , noOfOne = 0;
    //1st pass
    for(int i=0;i<vec.size();i++){
        if(vec[i]==0)   noOfZero++;
        else if(vec[i]==1) noOfOne++;
        else{
            cout<<vec[i]<<" is an invalid input , Enter only 0 and 1"<<endl;
        }
    }
    //2nd pass
    for(int i=0;i<vec.size();i++){
        if(i<noOfZero)  vec[i]=0;
        else vec[i]=1;
    }
    //display sorted array 
    cout<<" the sorted array is : ";
    display(vec);

    
}
