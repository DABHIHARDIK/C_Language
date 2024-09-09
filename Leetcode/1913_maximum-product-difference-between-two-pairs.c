#include<stdio.h> 

int maxProductDifference(int* nums, int numsSize){
    int max = 0 , secondmax = 0 ;
    int min = nums[0] , secondmin = nums[0] ; 
    for(int i = 0 ; i < numsSize ; i++){
        if(max < nums[i]){
            secondmax = max ; 
            max = nums[i];
        }
        else if(secondmax < nums[i])
            secondmax = nums[i];
        
        if (min > nums[i]){
            secondmin = min ; 
            min = nums[i];
        }
        else if ( secondmin > nums[i]){
            secondmin = nums[i];
        }
    } 
    printf("%d %d %d %d" , min , secondmin , max , secondmax);
    return (max * secondmax ) - (min * secondmin);
}

int main(){
    int nums[] = {5,6,2,7,4};
    maxProductDifference(nums , 5);
    return 0;
}