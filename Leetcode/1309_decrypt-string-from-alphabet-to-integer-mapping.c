#include<stdio.h>
#include<string.h>  

char* freqAlphabets(char* s) {
    int count = 0 ; 
    int slen = strlen(s);
    for(int i = 0 ; s[i] != '\0' ; i++){
        if (i+2 < slen && s[i + 2] == '#'){
            s[count] = (s[i] - '0') * 10 + (s[i+1] - '0') + 96;
            count++;
            i+= 2;
        }
        else
        {
            s[count] = (s[i] - '0') + 96;
            count++;
        }
    }
    s[count] = '\0';
    printf("%s",s);
    return s;
}

int main(){
    char s[] = "10#11#12";
    freqAlphabets(s);
    return 0;
}