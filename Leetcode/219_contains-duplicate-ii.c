#include<stdio.h> 
#include<stdlib.h>

typedef enum boolean {
    false , 
    true 
}bool;

bool containsNearbyDuplicate(int* nums, int numsSize, int k) {
    for(int i = 0 ; i < numsSize ; i++){
        for(int j = i+ 1 ; j < numsSize ; j++){
            if (nums[i] == nums[j]){
                printf("%d %d\n",i ,j );
                if(abs(i - j ) > k )
                    return false; 
                break;
            }
        }
    }
    printf("Output is %d",true);
    return true;
}

int main(){
    int nums[] = {1, 0 , 1, 1};
    int k = 1;
    containsNearbyDuplicate(nums , 4 , k );
    return 0; 
}