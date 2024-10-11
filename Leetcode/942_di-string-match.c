#include<stdio.h> 
#include<string.h> 
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* diStringMatch(char* s, int* returnSize) {
    int I = 0 ; 
    int D = strlen(s);
    int count = 0 ; 
    int *ptr = (int *)malloc(sizeof(int) * (D+1));
    for(int i = 0 ; i <= D ; i++){
        if(s[i] == 'I'){
            ptr[count] = I;
            I++;
            count++;
        }
        else
        {
            ptr[count] = D;
            D--;
            count++;
        }

    }
    return ptr;
}

int main(){
    char s[] = "IDID" ;
    return 0 ;
}