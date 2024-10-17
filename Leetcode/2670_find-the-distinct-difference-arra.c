#include<stdio.h> 
#include<stdlib.h> 

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* distinctDifferenceArray(int* nums, int numsSize, int* returnSize){
    *returnSize = numsSize;
    int *darray = (int*)malloc(sizeof(int) * numsSize);
    int prehash[51] = {0};
    int sufhash[51] = {0};
    for(int i = 0 ; i < numsSize ;i++){
        sufhash[nums[i]]++; 
    }
    for(int i = 0 ; i < numsSize ; i++){
        sufhash[nums[i]]--;
        prehash[nums[i]]++;
        int countpre = 0 ; 
        int countsuf = 0 ; 
        for(int j = 0 ; j < numsSize ;j++){
            if(prehash[nums[j]] > 0 )
                countpre++;
            if(sufhash[nums[j]] > 0)
                countsuf++;
        }
        darray[i] = countpre - countsuf;
        printf("%d ",darray[i]);
    }
    return darray;
}

int main(){
    int nums[] = {1,2,3,4,5};
    int size = 0 ; 
    distinctDifferenceArray(nums , 5 , &size);
    return 0 ;
}