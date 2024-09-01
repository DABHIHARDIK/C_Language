#include<stdio.h> 


char* removeOuterParentheses(char* s) {
    short count  = 0  , i;
    short datacount = 0 ;  
    for( i = 0 ; s[i] != '\0' ; i++){
        if ( count == 0  && s[i] == '('){
            count++;
            continue; 
        }
        else if ( count == 1  && s[i] == ')'){
            count--;
            continue; 
        }
        else if( s[i] == '('){
            count++;
            s[datacount] = s[i];
            datacount++;
        }
        else if( s[i] == ')'){
            count--;
            s[datacount] = s[i];
            datacount++;
        }
        
    }
    s[datacount] = '\0';
    printf( " %s",s);
    return s ; 
} 

int main(){
    char s[] = "(()())(())"; 
    removeOuterParentheses(s);
    return 0 ; 
}