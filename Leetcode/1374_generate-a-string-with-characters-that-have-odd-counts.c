#include<stdio.h>

char* generateTheString(int n) {
    char *gstring = (char *)malloc(sizeof(char) * n + 1);
    if(n % 2 == 0 ){
        int i = 0 ;
        for(; i < n - 1 ; i++){
            gstring[i] = 'a';
        }
        gstring[i] = 'b';
        gstring[i+ 1] = '\0';
    }
    else{
        int i = 0;
        for(; i < n ; i++){
            gstring[i] = 'a';
        }
        gstring[i] = '\0';
    }
    return gstring;
}

int main(){
    generateTheString(4);
    return 0 ;
}