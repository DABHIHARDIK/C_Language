#include<stdio.h> 

int maxDepth(char* s) {
    int count =  0 , temp = 0 ; 
    for (int i = 0 ; s[i]!='\0';i++){
        if ( s[i] == 40){
            temp++;
        }
        else if ( s[i] == 41){
            temp--;
        }
        if( temp > count)
            count = temp;
    }

    return count ; 
}

int main(){
char s[] = "(1+(2*3)+((8)/4))+1";
maxDepth(s);
    return 0 ; 
}