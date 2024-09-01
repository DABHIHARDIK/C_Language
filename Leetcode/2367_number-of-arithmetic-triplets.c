#include<stdio.h> 

int arithmeticTriplets(int* nums, int numsSize, int diff) {
    if ( numsSize < 3 ) return 0 ;
    int count = 0 ; 
    for ( int i = 0 ; i < numsSize -2 ; i++){
        for(int j = i+1;j< numsSize - 1;j++){
            if ( nums[j] - nums[i] > diff )
                break;
            if ( nums[j] - nums[i] != diff)
                continue;
            for ( int k = j+1 ; k < numsSize ; k++){
                if ( nums[k]-nums[j] > diff )
                    break;
                if (  nums[k] - nums[j] != diff)
                    continue;
                    count++; 
            }
        }
    }
    printf( " count value is %d",count);
    return count;
}

int main(){
    int nums[] = {0,1,4,6,7,10};
    arithmeticTriplets(nums , 6 , 3);
    return 0; 
}