/* Note of Enumeration
 1. Similar to structs , Enumeration is a different way if creating user defined datatype 
 2. Its less crucial than structs but are very much  apart of the c++ spirit
 3. An enumeration is a list of all possible values of a particular enum declaration
 4. enum declaration defines the set of all names that can be accepted as a permisssible value of that type
 5. These permissible values are callled enumerators
     For eg - enum type days_of_week has 7 enumerators
 6. Unlike the specification of a int datatype whose permisible values is a wide range of integers , enum gives a restricted permisssible values and it gives a specific name to every possible values 
 7. Enumerated type works when you know in advance a finite and usually a short list of values that a datatype has to take
 8. Using any values that are not listed in the enumeration declaration is illegal 
    eg - days_of_week day1 = mahashivratri;

 */

/* Note on how arithematic operations are performed on enum datatype
  1. Standated arithematic operations like addition , subtraction , multiplication , division etc can be carried out. 
  2. This is possible because enumerations are treated internally as integers 
  3. The 1st name in the list is given a value of 0 , the next name 1 and so on. 
  4. The enum days_of_week store enumerators from Sun to Sat as 0-6
  5. Although we know that Sun is a value of 0 , it should be avoided to use day=0 as it is not part of the enumerator
 */

//DAYS OF THE WEEK ENUMERATION
#include <iostream>
using namespace std;
enum days_of_week {Sun,Mon,Tue,Wed,Thu,Fri,Sat};    //enum declaration
int main(){
    //defining variables of days_of_week type
    days_of_week day1,day2;
    day1 = Mon; //internally int value of 1 is stored in day1
    day2 = Thu; //internally int value of 4 is stored in day2
    cout<<day1<<endl; //will print the value of 1 and not Mon
    cout<<day2<<endl; //will print the value of 4 and not Thu
    //performing arithematc operations 
    int diff = day2-day1;
    cout<<"Days between Mon and Thu is "<<diff<<endl;
    //relational operations 
    if(day1<day2)   cout<<"Monday comes before Thursday  "<<endl;
}