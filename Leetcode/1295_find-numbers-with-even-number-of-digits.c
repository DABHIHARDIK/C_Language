#include<stdio.h> 

int findNumbers(int* nums, int numsSize) {
    int count = 0 ; 
    for(int i = 0 ; i < numsSize ;i++){
        if(nums[i] < 10)
            count++;
        else if(nums[i] > 99 && nums[i] < 1000)
            count++;
        else if(nums[i] > 9999 && nums[i] < 100000)
            count++;
    }
    return numsSize - count;
}

int main(){
    int nums[] = {12,345,2,6,7896} ;
    findNumbers(nums , 5);
    return 0 ; 
}