#include<stdio.h>


int maximizeSum(int* nums, int numsSize, int k){
    int out = 0 ; 
    int max = 0 ; 
    for(int i = 0 ; i < numsSize ; i++){
        if (nums[i] > max)
            max = nums[i];
    }
    while( k != 0 ){
        out  += max;
        max++;
        k--;
    }
    return out;
}
int main(){
    int nums[] = {4,4,9,10,10,9,3,8,4,2,5,3,8,6,1,10,4,5,3,2,3,9,5,7,10,4,9,10,1,10,4};
    maximizeSum(nums, 31, 6);
    return 0;
}