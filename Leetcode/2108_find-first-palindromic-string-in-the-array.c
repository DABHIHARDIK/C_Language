#include<stdio.h> 
#include<string.h> 

char* firstPalindrome(char** words, int wordsSize) {
    for( int i= 0 ; i < wordsSize ; i++){
        char temp[100] ; 
        strcpy(temp , words[i]);    
        strrev(temp);
        printf( "%s\n" , temp);
        printf("%s\n", words[i]);
        if ( strcmp(temp , words[i]) == 0)
            return words[i];
    }
    return "";
}

int main(){
    char i[] = "abc";
    char i1[] = "car";
    char i2[] = "ada";
    char i3[] = "racecar";
    char i4[] = "cool";
    char *ptr[5] ;
    ptr[0] = i; 
    ptr[1] = i1; 
    ptr[2] = i2; 
    ptr[3] = i3; 
    ptr[4] = i4; 
firstPalindrome(ptr , 5);
    return 0 ; 
}
