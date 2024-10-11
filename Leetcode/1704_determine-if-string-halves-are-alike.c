#include<stdio.h> 
#include<string.h> 
#include<stdbool.h>

bool halvesAreAlike(char* s) {
    int halveslen = strlen(s) , start = 0 ;
    halveslen--;
    int left = 0  , right = 0 ; 
    while(start < halveslen){
        if(s[start] == 'a' || s[start] == 'e' || s[start] == 'i' || s[start] == 'o' || s[start] == 'u' || 
            s[start] == 'A' || s[start] == 'E' || s[start] == 'I' || s[start] == 'O' || s[start] == 'U')
                left++;
        if(s[halveslen] == 'a' || s[halveslen] == 'e' || s[halveslen] == 'i' || s[halveslen] == 'o' || s[halveslen] == 'u' || 
            s[halveslen] == 'A' || s[halveslen] == 'E' || s[halveslen] == 'I' || s[halveslen] == 'O' || s[halveslen] == 'U')
            right++;

        start++;
        halveslen--;
    }
    if(right == left)
        return true ; 
    return false ;  
    

}

int main(){

char s[] = "book";
halvesAreAlike(s);
return 0;
}