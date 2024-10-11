#include<stdio.h> 
#include<stdbool.h>
#include<stdlib.h> 

bool checkself(int data){
    int temp , value = data;
    while(data > 0 ){
        temp = data % 10; 
        if( temp == 0 || value % temp != 0 )
            return false;
        data = data / 10 ; 
    }
    return true ; 
}
int* selfDividingNumbers(int left, int right, int* returnSize) {
    int *ptr = (int * )malloc( sizeof(int ) * right);
    int count = 0 ; 
    for(int i = left ; i <= right ; i++){
        if( checkself(i) == true){
            ptr[count] = i;
            count++;
        }
    }
    *returnSize = count;
    return ptr;
}

int main(){
int returnSize = -1 ; 
selfDividingNumbers( 1 , 22 ,&returnSize );
    return 0; 
}