#include <iostream>
using namespace std;
struct Distance{
    int feet;
    float inches;
};
struct Room{
    Distance length;
    Distance width;
};
int main(){
    //Dining room measurements 
    Room dining;
    dining.length.feet = 13;
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;

    //alternate way to initialise a room is 
    Room bedroom = {{10,6.23},{12,9.56}};

    //Converting length and width into feet 
    float lengthInFeet = dining.length.feet + dining.length.inches/12;
    float widthInFeet = dining.width.feet + dining.width.inches/12;

    //Calculating area of dining room in square feet
    float area = lengthInFeet * widthInFeet;
    cout<<"The area of dining room is "<<area<<endl;
}