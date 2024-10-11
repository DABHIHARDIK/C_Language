#include<stdio.h> 
#include<string.h> 

int maxVowels(char* s, int k) {
    int max = 0 ; 
    int smax  = 0 ; 
    // int slen = strlen(s);
    for(int i = 0 ; i < k ; i++){
        if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                smax++;
        printf("%d " , i);
    }
    max = smax;
    for(int i = k ; s[i] != '\0' ;i++){ 
        printf("%d" , i);
        if(s[i]== 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
                smax++;
        if(s[i - k ]== 'a' || s[i - k] == 'e' || s[i - k] == 'i' || s[i - k ] == 'o' || s[i - k] == 'u')
                smax--;
        if(smax > max)
            max = smax;
        if(max == k )
            return k ;
    }
    
    return max;
}

int main(){
    char s[] = "weallloveyou";
    int j = 7;
    printf("%d", maxVowels(s , j));
    return 0; 
}