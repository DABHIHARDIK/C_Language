#include<stdio.h> 
#include<stdbool.h> 
#include<stdlib.h> 

int cmp(const void*a , const void*b){
    return *(int *)a - *(int *)b;
}
bool uniqueOccurrences(int* arr, int arrSize) {
    qsort(arr , arrSize , sizeof(int), cmp);
    for(int i = 0 ; i < arrSize -1 ; i++){
        if(arr[i] == arr[i+1 ])
            return false;
    }
    return true;
}

int main(){
    int arr[] = {1,2,2,1,1,3} ;
    uniqueOccurrences(arr , 6);
    return 0 ;
}