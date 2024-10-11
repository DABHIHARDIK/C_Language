#include<stdio.h> 

int sumOfUnique(int* nums, int numsSize) {
    int hash[101] = {0};
    int sum = 0 ; 
    for(int i = 0 ; i < numsSize ; i++){
        if(hash[nums[i]] == 0){
            hash[nums[i]]++; 
            sum += nums[i];
        }
        else{
          if(hash[nums[i]] == 1){
            sum -= nums[i];
            hash[nums[i]]++;
          }
        }
    }
    return sum;
}

int main(){
  int nums[] = {1, 2, 3, 2};
  sumOfUnique(nums , 4);
  return 0 ;
}