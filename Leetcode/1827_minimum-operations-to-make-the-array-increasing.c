#include<stdio.h> 
#include<stdlib.h>


int minOperations(int* nums, int numsSize){
    int out = 0  , max = 0  , index = 0 ; 
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] > max){
           max = nums[i];
            index = i ;
        }
    }
    out = max;
    for(int i = index ; i < numsSize ; i++ ){
        out += nums[i] + 1;
    }
    printf("%d " ,max);
    return out;
}

int main(){
    int nums[] = {1,5,2,4,1};
    minOperations(nums , 5);
    return 0 ;
}