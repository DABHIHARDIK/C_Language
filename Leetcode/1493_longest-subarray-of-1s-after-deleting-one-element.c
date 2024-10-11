#include<stdio.h> 
#include<stdbool.h> 

int longestSubarray(int* nums, int numsSize) {
    
    int left = 0 ; 
    int i = 0 , k = 1 ;
    for( ;i < numsSize ; i++){
        if(nums[i] == 0)
            k--;
        
        if(k < 0 ){
            if(nums[left] == 0)
                k++;
            left++;
        }
    }
    printf("%d" ,i - left - 1);
    return i - left -1;
    }


int main(){
    int nums[] = {1,1,0,1};
    longestSubarray(nums , 4);
    return 0;
}