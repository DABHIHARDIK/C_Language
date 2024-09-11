#include<stdio.h> 
#include<stdlib.h> 

int duplicateNumbersXOR(int* nums, int numsSize) {
   int out = 0;
   int hash[51] = {0};
   
   for( int i = 0 ; i < numsSize ;i++){
    hash[nums[i]]++;
   }
   for(int j = 0 ; j < numsSize ;j++){
    if(hash[j] == 2)
        out ^= j;
   }
   return out;

}

int main(){
    int nums[] = {1,2,1,3};
    int size = 4;
    duplicateNumbersXOR(nums , size );
    return 0;
}