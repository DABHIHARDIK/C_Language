#include<stdio.h> 
#include<stdbool.h>

int maximum69Number (int num) {
    int temp[5] = {0};
    int count = 0 ,out = 0 ; 
    bool set = false ;
    while(num > 0){
        temp[count] = num%10; 
        num /= 10 ;  
        count++;
    }
    for(int i = count - 1 ; i >= 0 ; i--){
        if ( temp[i] == 6 && set == false ){
            temp[i] = 9 ;
            set = true ;
        }
        out *= 10;
        out += temp[i];
    }

return out ; 
}

int main(){
int num = 9669;
maximum69Number(num);
    return 0;
}