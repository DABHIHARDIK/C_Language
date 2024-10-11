#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h> 
#include<string.h>

int lengthOfLongestSubstring(char* s) {
    int max = 0 ; 
    int smax = 0 ; 
    bool atoz[26] = {0};
    for(int i = 0 ; s[i] != '\0' ;i++){
        if(atoz[ s[i] -'a'] == false){
            atoz[ s[i] -'a'] = true;
            smax++;
        }
        else{
            memset(atoz , 0 , sizeof(atoz));
            smax = 0 ; 
        }
        if(smax > max)
            max = smax;
        
    }
    printf("%d ", max);
    return max;
}

int main(){
    char s[]="pwwkew";
    lengthOfLongestSubstring(s);
    return 0; 
}