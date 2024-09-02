#include<stdio.h> 

int sumOddLengthSubarrays(int* arr, int arrSize) {
    int len = arrSize%2==0 ? arrSize -1:arrSize;
    printf("Array len is %d\n",len);
    int sum = 0 ; 
    for(int i = 1 ; i <= len; i+=2){
        for(int k = 0 ; k < arrSize && arrSize >= k +i; k++){
            for(int j = k ; j < k + i ; j++){
                sum += arr[j];
                printf("%d", arr[j]);
        }
        printf("\n");
        }
    }
    printf(" final output is %d" ,sum);
    return sum ;
}

int main(){
    int arr[] = { 1 ,4 , 2, 5, 3};
    sumOddLengthSubarrays(arr,5);
    return 0; 
}