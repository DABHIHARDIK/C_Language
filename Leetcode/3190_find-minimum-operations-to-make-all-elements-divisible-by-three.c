#include<stdio.h> 
#include<stdlib.h> 


int minimumOperations(int* nums, int numsSize) {
    int count = 0 ; 
    for( int i = 0 ; i < numsSize ; i++){
        if ( nums[i]%3 == 1 || nums[i]%3 == 2)
            count++; 
    }
return count;
}

int main(){
int nums[] = { 1,2,3,4};
int numsize = 4 ; 
minimumOperations(nums ,numsize);
    return 0;
}