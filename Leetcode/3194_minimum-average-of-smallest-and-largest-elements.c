#include<stdio.h> 
#include<stdlib.h> 

int compare(const void* a, const void* b) {
   return (*(int*)a - *(int*)b);
}

double minimumAverage(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), compare);
    double avg = (nums[0] + nums[numsSize-1]) / 2.0 , temp = 0 ;
    for ( int i = 1 ; i < numsSize/2  ; i++){
        temp = 0 ; 
        temp = (nums[i] + nums[numsSize-1 - i ]) / 2.0;
        if (temp < avg)
        avg = temp ; 
    }
 return avg ; 
}

int main(){
    int nums[]= {7,8,3,4,15,13,4,1};
    minimumAverage(nums , 8 );
    return 0; 
}