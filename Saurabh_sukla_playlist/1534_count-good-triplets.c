#include<stdio.h>
#include<stdlib.h> 

int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int count = 0 ; 
    for(int i = 0 ; i < arrSize ; i++){
        for(int j = i+1 ; j < arrSize ; j++){
            for(int k = j + 1 ; k < arrSize ;k++){
                 if(abs(arr[i] - arr[j]) <= a && abs(arr[j] -  arr[k]) <= b && abs(arr[i] - arr[k] ) <= c )
                    count++;
            }
        }
    }
    return count ;
}

int main(){
    int arr[] = {3,0,1,1,9,7}, a = 7, b = 2, c = 3;
    countGoodTriplets(arr , 6 , a , b, c);
    return 0 ; 
}