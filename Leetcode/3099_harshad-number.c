#include<stdio.h>

int sumOfTheDigitsOfHarshadNumber(int x) {
    int sum = 0 ; 
    int temp = x ;
    while(x > 0){
        sum += x%10;
        x /= 10;
    }
    if( temp % sum == 0 )
        return sum ;
    else    
        return -1;
}

int main(){
    int x = 18; 
    sumOfTheDigitsOfHarshadNumber(x);
    return 0 ; 
}