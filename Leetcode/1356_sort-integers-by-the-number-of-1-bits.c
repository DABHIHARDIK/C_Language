#include<stdio.h> 
#include<stdlib.h> 

int countk(int k){
    int count = 0 ;
    while(k > 0){
        if(k & 1 == 1 )
            count++;
        k >>= 1;
    }
    return count ;
}

int cmp(const void* a , const void* b){
    return *(int *)a - * (int *)b; 
}
int* sortByBits(int* arr, int arrSize, int* returnSize) {
    int *sortarr = (int *)malloc(sizeof(int) * arrSize);
    *returnSize = arrSize;
    qsort(arr , arrSize , sizeof(int) , cmp);

    for(int i = 0 ; i < arrSize ; i++){
        sortarr[i] = arr[i];
        arr[i] = countk(arr[i]);
        printf("%d " , arr[i]);
    }    
    for(int i = 0 ; i < arrSize ; i++){
        for (int j = 0 ; j < arrSize - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                arr[j+ 1] = arr[j+ 1] ^ arr[j];
                arr[j] = arr[j+ 1] ^ arr[j];
                arr[j + 1] = arr[j + 1] ^ arr[j];
                sortarr[j + 1] = sortarr[j + 1] ^ sortarr[j];
                sortarr[j] = sortarr[j + 1] ^ sortarr[j];
                sortarr[j + 1] = sortarr[j + 1] ^ sortarr[j];
            }
        }
    }
    return sortarr;
}

int main(){
    int arr[] = {0,1,2,3,4,5,6,7,8};
    int size = 0 ; 
    sortByBits(arr , 9 , &size);
    return 0;
}