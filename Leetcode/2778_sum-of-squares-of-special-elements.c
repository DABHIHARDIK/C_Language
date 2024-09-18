#include<stdio.h> 
#include<stdint.h>

int sumOfSquares(int* nums, int numsSize){
    unsigned short out = 0 ;
    for(uint8_t i = 0 ; i < numsSize ;i++){
        if(numsSize % nums[i] == 0) 
            out += (nums[i] * nums[i]);

    }
    return out ; 
}

int main(){
    int nums[] = {1,2,3,4} ;
    sumOfSquares(nums , 4);
    return 0;
}