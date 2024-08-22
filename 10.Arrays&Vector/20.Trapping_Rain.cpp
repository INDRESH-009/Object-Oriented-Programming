/* Leetcode Question - 42 
 Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
 
*/



#include<iostream>
#include<vector>
using namespace std;
void GetInput(vector<int>& v){
    int input;
    cout<<"Enter the value of the array : ";
    for(int i=0;i<v.size();i++){
        cin>>input;
        v[i] = input;
    }
}
int trap(vector<int>& height) {
    int n = height.size();
    //find the previous greatest element array
    vector<int> PreviousGreatest(n);
    int max1 = height[0];
    for(int i=0;i<n;i++){
        PreviousGreatest[i] = max1;
        if(max1<height[i])  max1 = height[i];
    }
    //find the next greatest element array
    vector<int> NextGreatest(n);
    int max2 = height[n-1];
    for(int i=n-1;i>=0;i--){
        NextGreatest[i] = max2;
        if(max2<height[i])  max2 = height[i];
    }
    //find the smallest for each index of the 2 arrays and 
    //substract it with height[i]
    int water = 0;
    int min = INT_MIN;
    for(int i=1;i<n-1;i++){
        if(PreviousGreatest[i]<=NextGreatest[i]){
            min = PreviousGreatest[i];
        }
        else{
            min = NextGreatest[i];
        }
        if(height[i]<min){
            int waterlog = min-height[i];
            water += waterlog;
        }
    }
    return water;    
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> height(n);
    GetInput(height);
    int storedWater = trap(height);
    cout<<"The units of water trapped is : "<<storedWater<<endl;
}