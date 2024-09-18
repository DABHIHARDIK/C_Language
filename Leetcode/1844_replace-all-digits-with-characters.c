#include<stdio.h>

char* replaceDigits(char* s) {
    for(int i = 0 ; s[i] != '0' ; i+=2){
        if(s[i+1] == '\0')
            break;
        s[i+1] = s[i] + ( s[i+1] - '0');
    }
    return s;
}

int main(){
    char s[] = "a1c1e1";
    replaceDigits(s);
    return 0 ;
}