#include<stdio.h> 
#include<stdlib.h> 


int cmp( const void * a , const void *b ){
    return *(int *) a - *(int *)b;
}

int arrayPairSum(int* nums, int numsSize) {
qsort(nums , numsSize , sizeof(int) , cmp);
int max = 0 ; 
for(int i = 0 ; i < numsSize ; i+= 2){
    max += nums[i];
}
return max;

}

int main(){
    int nums[]= { 1 , 4, 3,2};
    arrayPairSum(nums , 4);
    return 0 ; 

}