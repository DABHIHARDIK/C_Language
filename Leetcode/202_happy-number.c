#include<stdio.h> 
#include<stdbool.h>
#include<stdlib.h>

static int isHappy(int n) {
    int sum= 0; 
    if (n < 7 ){
        if ( n == 1)
            return 1;
        else
            return 0;
    }
    while (n > 0)
    {
        sum += (n%10) * (n%10);        
        n /= 10;
    }
    
   return isHappy(sum);

}

int main(){
printf("%d",  isHappy(2));
    return 0;
}