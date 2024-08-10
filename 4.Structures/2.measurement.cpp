#include <iostream>
using namespace std;
struct Measurement{
    int foot;
    float inches;
};
int main(){
    Measurement M1 = {11,6.25};
    Measurement M2;
    cout<<"Enter the measurement in foot : ";
    cin>>M2.foot;
    cout<<"Enter the measurement in inches : ";
    cin>>M2.inches;
    //Add the values of M1 and M2 to give the total measurement M3
    Measurement M3;
    //If the value of sum of inches is greater than 12.0 the increase the foot by 1 and the remaining value is taken in inches
    M3.inches  = M1.inches + M2.inches;
    M3.foot = M1.foot + M2.foot;
    if(M3.inches >=12.0 ){
        M3.inches = M3.inches-12.0;
        M3.foot++;
    }
    cout<<"The sum of M1 and M2 is : "<<M3.foot<<"'-"<<M3.inches<<'"';

}