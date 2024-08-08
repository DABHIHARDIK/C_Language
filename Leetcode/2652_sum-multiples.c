#include<stdio.h>

int sumOfMultiples(int n){
if ( n < 2 )
return 0 ; 
int temp = 0 ; 
for (int i =3 ; i<=n ; i++){
    if ( i%3==0 || i%5==0 || i%7==0 ){
        temp += i; 
    }
}
printf( "%d",temp);
return temp ;
}

int main(){
sumOfMultiples(7);
    return 0 ;
}