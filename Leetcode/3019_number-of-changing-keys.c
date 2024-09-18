#include<stdio.h> 
#include<stdint.h>

int countKeyChanges(char* s) {
    uint8_t count = 0 ; 
    uint8_t prev = 27 ;
    uint8_t small[26] = {0};
    for(uint8_t i = 0 ; s[i] != '\0' ; i++){
        if(s[i] >= 'a' && s[i] <= 'z')// main loop 
            if(prev == (s[i] - 'a'))
            {
              continue;
            }
            else{
                small[s[i] - 'a']++;
                prev = s[i] - 'a'; 
            }
        else // main loop
             if(prev == (s[i] - 'A'))
            {
                continue;
            }
            else{
                small[s[i] - 'A']++;
                prev = s[i] - 'A';
            }
    }
    for(uint8_t i = 0 ; i < 26 ; i++){
        count += small[i];
    }
    printf("%d",count);
    return count - 1;
}

int main(){
    char s[] = "aAbBcC";
    countKeyChanges(s);
    return 0;
}