#include<stdio.h> 

int longestOnes(int* nums, int numsSize, int k) {
    int left = 0 ; 
    int i = 0 ;
    for( ;i < numsSize ; i++){
        if(nums[i] == 0)
            k--;
        
        if(k < 0 ){
            if(nums[left] == 0)
                k++;
            left++;
        }
    }
    printf("%d" ,i - left);
    return i - left ;
} 

int main(){
    int nums[] = {1,1,1,0,0,0,1,1,1,1,0}, k = 2;
    longestOnes(nums , 11 , k);
    return 0 ;
}