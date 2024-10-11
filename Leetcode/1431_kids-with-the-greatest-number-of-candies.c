#include<stdio.h> 
#include<stdbool.h> 
#include<stdlib.h> 

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = 0;
    bool *ptr = (bool *)malloc(sizeof(bool) * candiesSize); 
    for(int i = 0 ; i < candiesSize ; i++){
        if(max < candies[i])
            max = candies[i];
    }
    for(int i =0 ; i < candiesSize ; i++){
        if(extraCandies + candies[i] >= max)
            ptr[i] = true;
        else
            ptr[i] = false;
    }
    *returnSize = candiesSize;
    return ptr; 
}

int main(){
    int candies[] = {2,3,5,1,3}, extraCandies = 3 ; 
    int Size = 10 ; 
    kidsWithCandies(candies , 5 , extraCandies , &Size);
    return 0;
}