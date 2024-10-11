#include<stdio.h> 
#include<stdlib.h>
#include<stdbool.h> 


int* finalPrices(int* prices, int pricesSize, int* returnSize) {
    int *ptr = (int *)malloc(sizeof(int) * pricesSize);
    int i = 0 ; 
    for(; i < pricesSize - 1 ; i++){
     for(int j = i+1; j < pricesSize ; j++){
                if(prices[i] >= prices[j]){
                    ptr[i] = prices[i] - prices[j] ;
                    break;
                }
                else if(j == pricesSize -1 &&prices[i] <= prices[j])
                    ptr[i] = prices[i];
     }
        
    }
    ptr[i] = prices[i];
    for(int i = 0 ; i < pricesSize ; i++){//[4,2,4,2,3]
        printf("%d " , ptr[i]);
    }
    *returnSize = pricesSize;
    return ptr;
}

int main(){
    int prices[] = {8,4,6,2,3};
    int size = -1 ; 
    finalPrices(prices , 5 , &size);
    return 0 ; 
}