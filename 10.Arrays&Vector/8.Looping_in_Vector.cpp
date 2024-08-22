#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Question - Find the last occurance of x in array
    vector<int> v;
    cout<<"Enter the elements of the vector , press 0 to terminate"<<endl;
    int value;
    while(cin>>value && value!=0){
        v.push_back(value);
    }
    cout<<"Enter the number whose last occurance is needed to be found : ";
    int x;
    cin>>x;
    //method 1 - iterate through the array , keep track of the index of x in v as you encounter it , update this tracking variable if x reoccurs again . In this method we move from 1st to last 
    //method 2 - iterate through the array in reverse order and if you encounter x , print it as it is the last occurance since we are iterating in the reverse order
    //Method 2 is more efficient and toime saving so lkets apply it
    int index = -1; 
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            index=i;
            break;
        }
    }
    cout<<"The last occuring index of "<<x<<" is "<<index<<endl;
}