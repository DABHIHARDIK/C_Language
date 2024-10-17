#include<stdio.h> 
#include<stdint.h> 
#include<limits.h> 

int findGCD(int* nums, int numsSize) {
    int min = INT_MAX , max = 0 ; 
    for(int i = 0 ; i < numsSize ; i++){
        if(nums[i] > max)
            max = nums[i];
        if(nums[i] < min)
            min = nums[i];
    }
    if(max % min == 0 )
        return min;
    for(int i = min -1 ; i != 0 ; i--){
        if(max % i == 0 && min % i == 0 ){
            return i ;
        }
    }
    return -1 ;
}

int main(){
    int nums[] = {2,5,6,9,10};
    findGCD(nums , 5 );
    return 0 ;
 }