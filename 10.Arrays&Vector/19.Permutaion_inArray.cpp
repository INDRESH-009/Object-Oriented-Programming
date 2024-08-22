/* QUESTION ----- Leetcode 31 - Next Permutation 

A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2,1,3], 
[2,3,1], [3,1,2], [3,2,1].
The next permutation of an array of integers is the next lexicographically greater permutation of its integer

Lexicographical order is similar to the way words are arranged in a dictionary. It compares elements based on their order, starting from the first element. For example:
In lexicographical order: [1, 2, 3] comes before [1, 3, 2], just like "apple" comes before "banana" in a dictionary.
Think of it as "dictionary order" for numbers or arrays.

Expected Solution :
For example, the next permutation of arr = [1,2,3] is [1,3,2].
Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.

So our goal is for a given array , we have to find and print the next permutation of it (viz the next order of the array lexicographically)
*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void GetInput(vector<int>& v){
    int input;
    cout<<"Enter the value of the array : ";
    for(int i=0;i<v.size();i++){
        cin>>input;
        v[i] = input;
    }
}
/* 
 To find the next Permutation , let us form a function called nextPermutation which takes in the vector by refrence because we are going to make changes directly in the array 
        Step 1 : Find the pivot index from the given array 
                 The pivot is the first element from the end that is smaller than its next element.
        Step 2 : If there is not pivot point , then the aray is in the maximum lexicographic order , now 
                 reverse the entire array
        Step 3 : Reverse the array starting from the (pivot_index+1) till the end
        Step 4 : Now find the just next greater number in the array from the (pivot+1) index till end and store
                 its index in swapIndex variable
        Step 5 : Now swap the number in the pivot index and swapIndex
        Step 6 : Print the vector and it will give the next permutation



        Lets Dry run an example : 
        Given array = 4 1 3 2
        Step 1 : Start from the last but 2 index and compare it with its next index to check if it is 
                  smaller , If so that is the pivot index 
                 4   2   3   1 
                ___ ___ ___ ___
            index: 0  1  2  3
            pivot:       i
            loop : 1st iteration ---> arr[i]>arr[i+1]  (3)>(1) , so i-- 
                   2nd iteration ---> arr[i]<arr[i+1]  (2)<(3) , so pivot = i; => pivot = 1
        Step 2 : neclect as we found pivot 
        Step 3 : reverse the subarray from (pivot+1) to end 
                 reverse from index 2 to 3 
                 arr = 4 2 1 3 
        Step 4 : find the next greater number after pivot+1 till end 
                 index 2 and 3 - which is just greater than arr[pivot] ? 
                 1 , 3 - which is just greater than 2
                 so its 3 , swapIndex = index of 3 ==> swapIndex = 3
        Step 5 : swap(arr[pivot],arr[swapIndex]);
                 arr = 4 3 1 2
        Step 6 : print 4 3 1 2
        
 */
void nextPermutation(vector<int>& nums) {
    int pivot = -1;
    int n = nums.size();
    for(int i= n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            pivot = i;
            break;
        }
    }
    if(pivot==-1){
        reverse(nums.begin(),nums.end());
        return;
    }
    reverse(nums.begin()+pivot+1,nums.end());
    //finding the next greater number than piviot for swapping 
    int swapIndex;
    for(int i=pivot+1;i<n;i++){
        if(nums[pivot]<nums[i]){
            swapIndex = i;
            break;
        }
    }
    int temp = nums[pivot];
    nums[pivot] = nums[swapIndex];
    nums[swapIndex] = temp;
}
int main(){
    int n;
    cout<<"Enter the size of the array : ";
    cin>>n;
    vector<int> nums(n);
    GetInput(nums);
    nextPermutation(nums);
    cout<<"The next permutation of the array is : ";
    display(nums);
}