#include<stdio.h> 
#include<string.h>
char* reverseWords(char* s) {
    short pre = 0 , slen = strlen(s) ; 
    for(short i = 0 ; i <= slen ; i++){
        if ( s[i] == ' ' || s[i] == '\0'){
            for( short k = pre ; k < pre +((i - pre )/2) ; k++ ){
                s[k] = s[k] ^ s[ pre + i - 1 - k ];
                s[pre +i - 1 -k] = s[k] ^ s[pre + i - 1 - k];
                s[k] = s[k] ^ s[pre + i - 1 - k];
            }
            pre = i +1;
        }
    }
 return s ;
}

int main(){
    char s[] = "Let's take LeetCode contest";
    reverseWords(s);
    return 0; 
}