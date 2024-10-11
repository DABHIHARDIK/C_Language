#include<stdio.h> 
#include<stdlib.h> 

int pivotIndex(int* nums, int numsSize) {
   int *ptr = (int *)malloc(sizeof(int) * numsSize);
   for(int i = numsSize  - 1 ; i >=0 ;i-- )
    ptr[i] = nums[i];
   for(int i = 1 ; i < numsSize ;i++){
        nums[i] += nums[i -1];
        ptr[numsSize - i - 1] += ptr[numsSize - i ];

   }
    for(int i = 0 ; i < numsSize ; i++){
        if(ptr[i] == nums[i])
            return i ;
    }
    return -1;
}

 int main(){
    int nums[] = {1,7,3,6,5,6} ;
    pivotIndex(nums , 6);
    return 0 ;
 }