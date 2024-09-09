#include<stdio.h> 

int removeElement(int* nums, int numsSize, int val) {
    unsigned short detected = 0 , inx = 0  ; 
    for(unsigned short i = 0 ; i < numsSize -1 ; i++){
        if(nums[i] == nums[i+1]){
            detected++; 
            continue;
        }
        nums[inx] = nums[i];
        inx++;

    }
    return numsSize - detected;

}

int main(){
    int nums[] = {3,2,2,3}, val = 3;
    removeElement(nums , 4 , val);
    return 0;
}