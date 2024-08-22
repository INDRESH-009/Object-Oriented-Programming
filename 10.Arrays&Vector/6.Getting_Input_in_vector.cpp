#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> vector){
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int value;
    //we use a while loop to get the input and then use a sentinal value to end the loop , here the sentinal value is considered as -1
    while(cin>>value && value!=(-1)){
        v.push_back(value);
    }
    display(v);

    //If we give the size of the vector prior in the declaration , then we can use a similar approach to getting input as in arrays
    vector<int> v1(5);
    int input;
    for(int i=0;i<v1.size();i++){
        cin>>input;
        v1[i] = input;
    }
    display(v1);
}