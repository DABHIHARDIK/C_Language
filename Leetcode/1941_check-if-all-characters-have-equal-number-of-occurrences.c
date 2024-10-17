#include<stdio.h> 
#include<stdbool.h>

bool areOccurrencesEqual(char* s) {
    int hash[26] = {0};
    int max = 0 ;
    for(int i = 0 ; s[i] != '\0' ; i++){
        hash[s[i] -'a']++;
        if(max < hash[s[i] - 'a'])
            max = hash[s[i] - 'a'];
    }
    for(int i = 0 ; i < 26 ; i++){
        if(hash[i] != max)
            return false;
    }
    return true;
}

int main(){

    char s[] = "abacbc";
    areOccurrencesEqual(s);
    return 0 ;
}
