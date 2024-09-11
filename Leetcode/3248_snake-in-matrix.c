#include<stdio.h> 

int finalPositionOfSnake(int n, char** commands, int commandsSize) {
    int val = 0 ; 
    for( unsigned char i = 0 ; i < commandsSize ; i++){
        if ( commands[i][0] == 'R')
            val++;
        else if ( commands[i][0] == 'D')
            val += n;
        else if ( commands[i][0] == 'U')
            val -= n ;
        else
            val--;
    }
    printf("%d" , val);
    return val; 
}

int main(){
    int n = 2;
    char *commands[] = {"RIGHT","DOWN"};
    finalPositionOfSnake(n , commands , 2);
    return 0;
}