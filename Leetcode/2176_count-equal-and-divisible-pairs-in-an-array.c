#include<stdio.h> 

int countPairs(int* nums, int numsSize, int k) {
    int count = 0 ; 
    for (int i = 0 ; i < numsSize ; i++){
        for(int j = i + 1; j < numsSize ; j++){
            if (nums[i] == nums[j] && (i * j) % k == 0){
                    count++;
            }
        }
    }
    return count;
}

int main(){
    int nums[] = {3,1,2,2,2,1,3}, k = 2;
    countPairs(nums , 7 , k );
    return 0 ; 
}
