#include<stdio.h> 

int sumBase(int n, int k) {
    int sum = 0 ; 
    while(n >= k){
        sum += n%k ;
        n /= k;
    }
    sum += n;
    printf("%d" ,sum);
    return sum;
}

int main(){
    sumBase(34 ,6);
    return 0 ;
}