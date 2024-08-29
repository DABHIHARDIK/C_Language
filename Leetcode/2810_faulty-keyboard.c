#include<stdio.h> 
#include<stdlib.h>

char* finalString(char* s) {
    for(short i = 0 ; s[i] != '\0' ; i++){
        if ( s[i] == 'i'){
            for( int j = 0 ; j < i / 2 ; j++){
                s[j] = s[j] ^ s[i- j - 1 ];
                s[i - j - 1] = s[j] ^ s[i - j - 1];
                s[j] = s[j] ^ s[i - j - 1];
            }
            short j = i ; 
            for( ; s[j] != '\0' ; j++){
                s[j] = s[j+1];
            }
            // s[j] = '\0';
            i--;
        }
    }
    return s ; 
}
int main(){
    char s[] = "poiinter";
    finalString(s);
    return 0 ; 
}