#include <iostream>
#include <vector>
using namespace std;
void change_byVal(vector<int> v){
    v[2] = 100;
}
void change_byRef(vector<int>& v){
    v[2] = 100;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    /* 
     1. In arrays when we pass it to the function , it is passed as refremce as the array name acts as a pointer to the address of the array 
     2. So any changes made in  function is directly reflected in the original array as it is passed by refrence 
     3. In case of vectors , passing it to the function is by "pass by value" , so a new vector is created and thus changes made in the vector is not visible in the original array.
     4. Syntax - return_type fn_name(vector<dtype> vector_name) 

                void display(vector<int> vector){
                //statements 
                }

                display(v);
      5. For the above code , when vector v is passed into display function , its passed by value and a new vector mentioned in the declaration "vector_name" is created in the memeory and copied all the contents of vector v.   
      6. To make the vector to be passed as refrence , we need to add an & sign after the datatype in the function declaration     
         Syntax - return_type fn_name(vector<dtype>& vector_name)
       7. This will make changes ti the original vector .
     */
    vector<int> abc(5,2);   //abc vector with size 5 and default value 2
    cout<<"Vector passed by value to chage index 2 from 2 to 100: "<<endl;
    change_byVal(abc);
    display(abc);
    cout<<"Vector passed by Reference to chage index 2 from 2 to 100: "<<endl;
    change_byRef(abc);
    display(abc);




}