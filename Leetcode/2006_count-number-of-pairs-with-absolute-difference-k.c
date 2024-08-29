#include<stdio.h> 
#include<stdlib.h> 


int cmp( const void *a , const void *b ){
    return (*(int *)a - *(int *)b);
}
int countKDifference(int* nums, int numsSize, int k) {
    int count = 0 ;
    qsort(nums , numsSize , sizeof(int), cmp);
    for( int i = 0 ; i < numsSize ; i++){
        for ( int j = i+ 1 ; j < numsSize ; j++){
            if( abs(nums[i] - nums[j]) > k )
                break; 
            if( abs( nums[i] - nums[j]) == k )
                count++; 
        }
    }
    return count; 
}
int main(){

int  nums[] = {1,3};
countKDifference ( nums , 4 , 1);

    return 0 ; 
}