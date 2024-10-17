#include<stdio.h> 
#include<stdbool.h> 
#include<stdlib.h> 

int cmp(const void*a , const void*b){
    return *(int *)a - *(int *)b;
}
int cmpn(const void*a , const void*b){
    return *(int *)b - *(int *)a;
}
bool uniqueOccurrences(int* arr, int arrSize) {
    qsort(arr , arrSize , sizeof(int), cmp);
    int *unique = (int *)malloc(sizeof(int) * arrSize);
    int count = 1 ; 
    int inc = 0 ;
    int i = 1 ;
    for(; i < arrSize ; i++){
        if(arr[i] == arr[i - 1])
            count++;
        else{
            unique[i - 1] = count;
            inc++;
            count = 1;
        }
    }
    if(arr[arrSize - 1 ] == arr[arrSize - 2])
        unique[arrSize - 2] = count;
    else{
        unique[arrSize - 1] = 1;
    }
    qsort(unique , arrSize , sizeof(int) , cmpn);
    for(int i = 1 ; i <= inc ; i++){
        if(unique[i] == unique[i - 1])
            return false;
    }

    return true;
}

int main(){
    int arr[] = {1,2 , 1, 2, 1 ,3} ;
    uniqueOccurrences(arr , 6);
    return 0 ;
}