#include<stdio.h>

int minPartitions(char* n) {
    int out = 0 ; 
    for(int i = 0 ; n[i] != '\0';i++){
        if(out < n[i])
            out = n[i];
    }
    return out ; 
}

int main(){
    minPartitions("32");
    return 0;
}