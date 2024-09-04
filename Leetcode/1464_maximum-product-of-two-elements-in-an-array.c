#include<stdio.h> 

int maxProduct(int* nums, int numsSize) {
    int max  = 0, secondmax = 0 ;
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] >= max)
        {
            secondmax = max ; 
            max = nums[i];
    }
    }
    printf(" %d %d",max, secondmax);
    
    return (max - 1) * (secondmax - 1);
}

int main(){
    int nums[] = {1,5,4,5};
    maxProduct(nums , 4);
    return 0 ; 
}