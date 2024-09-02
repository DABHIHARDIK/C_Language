#include<stdio.h> 
#include<stdbool.h> 

bool canAliceWin(int* nums, int numsSize) {
    int singledig = 0 , doubledig = 0 ; 
    for(int i = 0 ; i < numsSize ; i++ ){
        if(nums[i] >= 10){
            doubledig +=nums[i];
        }
        else
        {
            singledig +=nums[i];
        }
    }
    if (doubledig == singledig)
        return false;
    else    
        return true;
}
int main(){
    int arr = {1,2,3,4,10};
    canAliceWin(arr , 5);
    return 0;
}