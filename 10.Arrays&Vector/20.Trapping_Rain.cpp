/* Leetcode Question - 42 
 Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it can trap after raining.

Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.
 




 IDEA TO SOLVE : 
 The water trapped above a bar depends on the highest bars to its left and right. To calculate this trapped water, you need to know:

        The maximum height of the bars to the left of the current bar.
        The maximum height of the bars to the right of the current bar.
        The amount of water that can be trapped above a bar is determined by the smallest of these two heights, minus the height of the bar itself.

1 . Find Previous Greatest Heights:

    The PreviousGreatest array stores the maximum height encountered from the start of the array up to the current position. This tells us the highest bar to the left of each bar.

    Example: For the elevation map [0, 1, 0, 2]:
    PreviousGreatest[0] is 0 (the first bar itself).
    PreviousGreatest[1] is 1 (the maximum height encountered from the start up to index 1).
    PreviousGreatest[2] is 1 (the maximum height encountered from the start up to index 2).
    PreviousGreatest[3] is 2 (the maximum height encountered from the start up to index 3).
    This helps in understanding how high the water could be at each position based on the highest bar to the left.

2. Find Next Greatest Heights:

    The NextGreatest array stores the maximum height encountered from the end of the array up to the current position. This tells us the highest bar to the right of each bar.

    Example: For the elevation map [0, 1, 0, 2]:
    NextGreatest[3] is 2 (the last bar itself).
    NextGreatest[2] is 2 (the maximum height encountered from the end up to index 2).
    NextGreatest[1] is 2 (the maximum height encountered from the end up to index 1).
    NextGreatest[0] is 2 (the maximum height encountered from the end up to index 0).
    This helps in understanding how high the water could be at each position based on the highest bar to the right.

3. Calculate Trapped Water:

For each bar (excluding the first and last bars, as water can't be trapped there), you can calculate the amount of water trapped above it. The height of water trapped above a bar is determined by the smaller of the maximum heights to its left and right minus the height of the bar itself.

Formula: Water trapped = min(PreviousGreatest[i], NextGreatest[i]) - height[i]
PreviousGreatest[i] is the maximum height to the left of the bar.
NextGreatest[i] is the maximum height to the right of the bar.
height[i] is the height of the current bar.


Example: For the elevation map [0, 1, 0, 2]

For bar at index 1:
PreviousGreatest[1] is 1
NextGreatest[1] is 2
Height[1] is 1
Water trapped above index 1 = min(1, 2) - 1 = 1 - 1 = 0


For bar at index 2:
PreviousGreatest[2] is 1
NextGreatest[2] is 2
Height[2] is 0
Water trapped above index 2 = min(1, 2) - 0 = 1 - 0 = 1


The trapped water calculation at each bar accounts for the fact that the height of water can only be as high as the shorter of the two surrounding bars (left and right).

Summary
Previous Greatest Heights: Determine how high the water could be based on the highest bar to the left.
Next Greatest Heights: Determine how high the water could be based on the highest bar to the right.
Trapped Water Calculation: For each bar, compute the potential trapped water as the difference between the minimum of these two heights and the height of the bar.
By using these arrays, you efficiently compute the trapped water in linear time, O(n), while using additional space for storing the PreviousGreatest and NextGreatest arrays.
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