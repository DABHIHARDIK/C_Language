#include<stdio.h> 
#include<stdbool.h>
#include<stdlib.h>

bool isHappy(int n) {
    int sum= 0; 
    if (n < 10 ){
        if ( n == 1)
            return true;
        else
            return false;
    }
    while (n > 0)
    {
        sum += (n%10) * (n%10);        
        n /= 10;
    }
    printf("sum value is %d\n",sum);
    isHappy(sum);
    
}

int main(){
printf("%d",  isHappy(2));
    return 0;
}