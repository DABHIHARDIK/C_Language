#include<stdio.h> 
#include<string.h>
#include<stdlib.h> 
#include<stdbool.h> 

char * sortSentence(char * s){
    int slen = strlen(s);
    bool found ;
    int base = 0 ,count  = 0 ;
     short j ; 
    char *ptr = (char *)malloc(sizeof(char) * slen);
    for(char i = '1' ; i <= '9' ; i++){
        printf("\ni value is %c\n",i);
        found = false;
        base = 0 ;
        for( j = 0 ; s[j] != '\0' ; j++){
            if( s[j] == i){
                found = true;
                if(base == 0 && count > 0){
                    ptr[count] = ' ';
                    count++;
                }
                if( i == '1' && base > 0)
                    base++;
                for( int k = base ; k < j ;k++){
                    ptr[count] = s[k];
                    printf("%c",ptr[count]);
                    count++;
                }
                break;
            }
            if(s[j]== ' ' ){
                base = j ;
            }
        }
        if ( found == false)
            break;
    }
    ptr[count] = '\0';
    printf("%s" , ptr);
    return ptr;
}   
int main(){
    char s[] = "pty1";
    sortSentence(s);
    return 0; 

}