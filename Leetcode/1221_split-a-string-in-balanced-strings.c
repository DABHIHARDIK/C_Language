#include<stdio.h>

int balancedStringSplit(char* s) {
    int R = 0 , L =0,count=0 ;
    for( int i = 0 ; s[i]!='\0';i++ ){
        if( s[i] == 'R'){
            R++;
        } 
        if(s[i]=='L'){
            L++;
        }
        if(R==L){
            count++;
        }
    }
    printf("%d",count);
    return 0 ; 
}

int main(){
char str[]= "RLRRRLLRLL";
balancedStringSplit(str);
    return 0 ;
}