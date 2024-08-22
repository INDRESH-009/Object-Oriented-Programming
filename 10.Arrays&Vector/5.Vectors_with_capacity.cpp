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
    //We cna give a vector a capacity at the time of declarion , this creates memeory location at the time of declaration itself and each location is given a default value of 0. We can access the elements of this vector using the vector[index] notation as the memeory is already allocated at the time of declation 

    //vector of capacity 5 , default values are 0
    vector<int> v(5);
    display(v);
    //accessing the elemts of the vector and uodating 
    v[1] = 100;
    display(v);
    //checking the size and capacity
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    //push_back 20
    v.push_back(20);    //capacity is full so it doubles
    display(v);
    //checking the size and capacity
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;

    //vector with capacity 5 and all default elements have a value of 3 then 
    vector<int> v1(5,3);
    display(v1);    //3 3 3 3 3 

    

    



}