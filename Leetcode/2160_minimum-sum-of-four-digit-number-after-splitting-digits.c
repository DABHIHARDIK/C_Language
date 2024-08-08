#include<stdio.h>

int minimumSum(int num) {
    int array[4];
     for ( int a =3 ; a >= 0 ; a--){
        printf("%d",a);
        array[a]=num%10;
        num = num/10;     
         
    }
    int temp = 0,out = 0  ; 
    temp = (10 * array[0]+array[1]) + (10 * array[2]+array[3]) ;
    out = temp;
    temp = (10 * array[1]+array[0]) + (10 * array[2]+array[3]) ;
    if( out > temp){
        out = temp;
    }
    temp = (10 * array[1]+array[0]) + (10 * array[3]+array[2]) ;
    if( out > temp){
        out = temp;
    }
    temp = (10 * array[0]+array[1]) + (10 * array[3]+array[2]) ;
    if( out > temp){
        out = temp;
    }
    temp = (10 * array[0]+array[3]) + (10 * array[1]+array[2]) ;
    if( out > temp){
        out = temp;
    }
      temp = (10 * array[2]+array[0]) + (10 * array[3]+array[1]) ;
    if( out > temp){
        out = temp;
    }


    return out; 
}

int main(){

    minimumSum(2687);
    return 0 ;
}