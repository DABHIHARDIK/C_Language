#include<stdio.h> 
#include<stdlib.h> 
int differenceOfSum(int* nums, int numsSize) {
    int temp = 0 , sum = 0 , digitsum = 0 ; 
    for( int i = 0 ; i < numsSize ; i++){
        temp = nums[i];
        sum += nums[i];
        if ( temp < 10 ){
            digitsum += temp; 
            continue; 
            }
        while(temp>=1){
            digitsum += temp%10; 
            temp /= 10; 
        }

    }
    
return abs(digitsum - sum); ; 
}

int main(){

int nums[]= { 1,5,6,3};
differenceOfSum(nums,4);
    return 0; 
}