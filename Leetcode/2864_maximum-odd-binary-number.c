#include<stdio.h> 
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>

char* maximumOddBinaryNumber(char* s){
    short slen = strlen(s);
    printf(" s len is %d\n" , slen);
    bool set = false;
    short countp = 0 , countm = slen , i  ;
    char *ptr = (char *)calloc( slen + 1, sizeof(char));
    for( i = 0 ; i < slen ; i++){
        if(s[i] == '0'){//0101
            ptr[countm - 2] = s[i];
            countm--;
            continue;
        }
        else{
            if(set == true){
                ptr[countp] = s[i];
                countp++;
            }
            else{
                set = true ;
                ptr[slen - 1] = s[i];
            }
        }
    }
    printf("i is %d\n",i);
    ptr[i] = '\0';
    printf("%s",ptr);
    return ptr;
}
int main(){
    char s[] = "010";
    maximumOddBinaryNumber(s);
    return 0 ;
}