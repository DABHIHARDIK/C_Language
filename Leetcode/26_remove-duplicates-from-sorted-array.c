#include<stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    int count = 1 ; 
    int samecount = 0 ;
    for(unsigned short i = 0 ; i < numsSize -1 ;i++){
        if (nums[i] == nums[i+1]){
          samecount++;
          continue;
        }
        nums[count] = nums[i+1];
        count++;
    }
    return numsSize - samecount;
}
int main(){
    int nums[] = {0,0,1,1,1,2,2,3,3,4};
    removeDuplicates(nums ,10 );
    return 0 ; 
}