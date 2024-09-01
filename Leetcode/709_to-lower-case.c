#include<stdio.h> 

char* toLowerCase(char* s) {
    for(short i = 0 ; s[i]!='\0' ; i++){
        if(s[i] > 64 && s[i] < 91){
            s[i] = s[i]+32;
        }
    }
    printf("%s",s);
    return s ; 
}
int main(){

char s[]= "Happy";
toLowerCase(s);
    return 0 ;
}