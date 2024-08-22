/* Operations on vectors 
 *  1. push_back()
    2. size()
    3. capacity()
    4. pop_back()
    5. at
    6. sort
 */

#include <iostream>
#include <vector>
using namespace std;
//
void display(vector<int> vector){
    for(int i=0;i<vector.size();i++){
        cout<<vector[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    //pushback method helps in adding elements to the vector and based on the number of elements , it helps to expand the capacity of the vector 
    //size() method heklps to determine the number of elements in the vector 
    //capacty() method helps to determine the maximum capacity of the vector with a given size of the vector
    v.push_back(1);
    cout<<"Size with 1 element is : "<<v.size()<<endl;
    cout<<"Capacity with 1 element is : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(2);
    cout<<"Size with 2 element is : "<<v.size()<<endl;
    cout<<"Capacity with 2 element is : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(3);
    cout<<"Size with 3 element is : "<<v.size()<<endl;
    cout<<"Capacity with 3 element is : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(4);
    cout<<"Size with 4 element is : "<<v.size()<<endl;
    cout<<"Capacity with 4 element is : "<<v.capacity()<<endl;
    cout<<endl;

    v.push_back(5);
    cout<<"Size with 5 element is : "<<v.size()<<endl;
    cout<<"Capacity with 5 element is : "<<v.capacity()<<endl;
    cout<<endl;

   /*  pop_back() method is used to remove the last element from the vector 
    Lets assume we have 5 elements in the vector , then : 
        1. size of vector - 5
        2. Capacity of vetor - 8
    If we now pop_back() 3 elements from the vector then : 
        1. Size of vector - 2
        2. Capacity of vector - 8
    So even if you pop_back elemets from the vector , the size of the vector changes but once the capacity in the memory is allocated is will not be changed 
    
     */
    display(v);     // 1 2 3 4 5
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<endl;

    v.pop_back();   //5 poped out
    display(v);     // 1 2 3 4 
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<endl;

    v.pop_back();   //4 poped out
    v.pop_back();   //3 poped out
    display(v);     // 1 2 
    cout<<"Size is : "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity()<<endl;
    cout<<endl;

    /* ̉
     1. at() method in vectors is used to access the elements of the array like the [index] method 
     2. v[1] and v.at(1) both get the same output viz the element present in the 1st index of v.

    Key Differences Between at() and []:

    1. Bounds Checking:
    at(): Throws a std::out_of_range exception if the index is out of the valid range of the vector.
    []: Does not perform bounds checking and can lead to undefined behavior if the index is out of bounds.

    2. Use Case:
    Use at() when you want to ensure safety and need bounds checking.
    Use [] when you're confident that the index will always be within the valid range and need maximum performance.  






    Lets assume we have a vector oif size 10 and we are tying to access the element at index 100 viz out of bound then what is the difference in using the at() method and subscript operator [].

    Case 1: v[100]
    Behavior: The subscript operator [] does not perform bounds checking.
    Outcome: Accessing v[100] will lead to undefined behavior because you are trying to access an element well beyond the valid range of indices (which should be 0 to 9 for a vector of size 10).
    In the best-case scenario, it might return some garbage value.
    In the worst case, it could cause a segmentation fault or crash your program, depending on what lies in the memory location that v[100] tries to access.


    Case 2: v.at(100)
    Behavior: The at() method does perform bounds checking.
    Outcome: Accessing v.at(100) will throw a std::out_of_range exception because index 100 is out of the valid range.
    The exception can be caught using a try-catch block, and you can handle the error gracefully.


     */
    cout<<v.at(1);
    cout<<v[1]<<endl;

/*   Using the sort method - std::sort uses introsort, which combines quicksort, heapsort, and insertion sort.
     * 1. sort syntax - sort(vector.begin(),vector.end()) will sort all elements 
*/
    vector<int> v2;
    cout<<"Enter the series of numbers to be sorted : ";
    int num;
    while(cin>>num && num!= 0){
        v2.push_back(num);
    }
    sort(v2.begin(),v2.end());
    display(v2);
}