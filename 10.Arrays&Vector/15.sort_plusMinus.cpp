/* Sort the positive and negative numbers of a given array , by moving all the negative numbers to the beginning of the aray and the positive numbers to the end of the array with constant extra spaces . The order like ascending or desending order is not require d
 * 
 eg :               [1,-3,2,-9,4,8,-7]
 Sorted array : -   [-3,-9,-7,4,8,1,2] , the order inside doesnt matter , only sort positive and negative numbers
 */
#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //get size
    int n;
    cout<<"ENter the size of array : ";
    cin>>n;
    //get the input of the vector 
    vector<int> arr(n);
    cout<<"Enter the elements of the array : ";
    int input;
    for(int i=0;i<n;i++){
        cin>>input;
        arr[i] = input;
    }
    /*
     using 2 pointer method to swap if
        arr[i]>0 && arr[j<0]    swap , i++ , j--
        arr[i]<0                i++
        arr[j]>0                j--
     */
    int i=0;
    int j=arr.size()-1;
    while(i<j){
        if( arr[i]>0 && arr[j]<0){
            //swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
        else if(arr[i]<0 )      i++;
        else if(arr[i]<0 )      j--;
    }
    //dispaly the array
    display(arr);

}