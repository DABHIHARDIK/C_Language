#include<stdio.h> 
#include<stdlib.h> 
#include<limits.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getFinalState(int* nums, int numsSize, int k, int multiplier, int* returnSize) {
    int *ptr = (int *)malloc(sizeof(int) * numsSize);
    *returnSize = numsSize;
    int i = 0 , j = 0 , min = 100 , index = 0 ; 
    for(i = 0 ; i < numsSize ; i++){
        ptr[i] = nums[i];
    }
    for(i = 0 ; i < k ; i++ )
    {   min = INT_MAX ;
        for( j = 0 ; j < numsSize ; j++){
            if (min > ptr[j] ){
                min = ptr[j] ;
                index = j;
            }
        }
        ptr[index] = ptr[index] * multiplier;
    }
    for(int j = 0 ; j < numsSize ; j++){
    printf("%d ",ptr[j]);
    }

    return ptr;
}

int main(){
    int nums[] = {7,71,15}, k = 10, multiplier = 3;
    int numsSize = 3 ;
    getFinalState(nums , numsSize , k , multiplier , &numsSize);
    return 0 ;
}