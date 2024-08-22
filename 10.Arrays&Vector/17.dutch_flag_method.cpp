/* Dutch flag method 
    This method is used to sove the same Leetcode 75 question but it is an advancement of that 
    In the previous file , we used the 2 pass method to solve the same question , but what of we need to solve this question in a single pass , for this to be achieved we use the duytch flag method 

  To sort the array of 0's 1's and 2's in a single passs we can use 3 pointers 
  Let us name the 3 pointers as low,mid and high
  Our idea is that , at the end 
        0's should be between the 0th index and low pointer 
        2's should be between high pointer and last index 
        1's should fill the gap bettwen 0's and 2's
          0     0   0    0    1    1    1     1     2    2   2
        ----- ---- ---- ---- ---- ---- ---- ----- ---- ---- ----
        0th             low                    high         last
        index                                               index
        
        We are going to play around to achieve this using the mid pointer only , all if-else , loops shd be involving mid pointer only 

        This is called the Dutch Flag Algorithm : 

        INITIALLY : position of pointers 
        int low = 0;
        int mid = 0;
        int high = nums.size()-1
          2    0     2    1    1    0  
        ----- ---- ---- ---- ---- ----
         low                       high
         mid                                    

        CONDITIONS : 
        while(mid>high){
            1. if(num[mid]==2){
                    swap(mid,high);
                    high++;
                }
            2.  if(nums[mid]==0){
                    swap(mid,low);
                    mid++
                    low++
                }
            3.  if(nums[mid]==1){
                    mid++
                }
        }

        ITERATIONS :
        1ST ITERATION : condition 1 hit
          0    0     2    1    1    2  
        ----- ---- ---- ---- ---- ----
         low                 high    
         mid     

        2ND ITERATION : condition 2 hit
          0    0     2    1    1    2  
        ----- ---- ---- ---- ---- ----
               low           high    
               mid  

        3RD ITERATION : condition 2 hit
          0    0     2    1    1    2  
        ----- ---- ---- ---- ---- ----
                    low      high    
                    mid   

        4TH ITERATION : condition 1 hit
          0    0     1    1    2    2  
        ----- ---- ---- ---- ---- ----
                    low high    
                    mid   
        

        5TH ITERATION : condition 3 hit
          0    0     1    1    2    2  
        ----- ---- ---- ---- ---- ----
                    low high    
                         mid 

        
        6TH ITERATION : Condition failed
                        loops exited 
 */


#include<iostream>
#include<vector>
using namespace std;
void swap_nums(int& x,int& y){
    int temp = x;
    x = y;
    y = temp;
}
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    //get size of vector 
    int n;
    cout<<"Enter the array size : ";
    cin>>n;
    //get array input 
    vector<int> nums(n);
    int input;
    cout<<"Enter the elements fo array : ";
    for(int i=0;i<n;i++){
        cin>>input;
        nums[i]=input;
    }
    int low = 0;
    int mid = 0;
    int high = n-1;
    while(mid<=high){
        if(nums[mid]==2){
            swap_nums(nums[mid],nums[high]);
            high--;
        }
        else if(nums[mid]==0){
            swap_nums(nums[mid],nums[low]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
    }
    display(nums);

}