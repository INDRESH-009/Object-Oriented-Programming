/* Note on Structures : 
 1. One of the way to organise simple vaariabels into one complex entity can be done by using a c++ construction called structures . They are a blueprint that specifies what info can be groued together into one entity. 
 2. Structure is a collection of variabels 
 3. Their types can be different unlike arrays 
 4. Data items in the structure is called men=mber of the strucutre 
 5. Difference between class and structure is though structures can hold both variabels and methods into them , the general practice is to use structure only to use data members and if methods are also to be included we use classes . 
 6. When a structure is defined , similar to a class definition , no memory is allocated util a structure variable is created. The structre definition merely acts a s blueprint
 */


#include <iostream>
using namespace std;
//structure definition
struct Car{
    //struct members
    string brand;
    string model;
    int yearOfManufacture;
    float cost; 
};

int main(){

  //creating a struct variable
  Car Now;

  //Initialising and creating a struct variable
  Car Future = {"BMW","M8",2024,24000000};

  //accessing the struct members using the dot/member access operator
  cout<<"Enter the car brand : ";
  cin>>Now.brand;
  cout<<"Enter the car model: ";
  cin>>Now.model;
  cout<<"Enter the car Manufacturing year : ";
  cin>>Now.yearOfManufacture;
  cout<<"Enter the car cost : ";
  cin>>Now.cost;
  float hardwork = Future.cost/Now.cost;
  cout<<"To reach your future goal you have to work "<<hardwork<<"x than u are doing now\nWork hard babyyyyyyy"<<endl;

  //structure variables in assignment statements
  Car Mid = Future;
  cout<<Mid.brand;

}
