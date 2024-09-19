#include<stdio.h> 

int countPoints(char* rings) {
    short red[10] = {0};
    short blue[10] = {0};
    short green[10] = {0};
    short count = 0 ;
    for(int i = 0 ; rings[i] != '\0' ; i++){
        if(rings[i] == 'B')
            blue[rings[i+1] - '0'] = 1;
        else if ( rings[i] == 'R')
            red[rings[i+1] - '0'] = 1;
        else 
            green[rings[i + 1] - '0' ] = 1;
    }
    for ( int i = 0 ; i < 10 ; i++){
        if ( red[i] == 1 && blue[i] == 1 && green[i] == 1 )
            count++;
    }
    printf("%d" ,count);
    return count;
}

int main(){
char rings[] = "B0B6G0R6R0R6G9";
countPoints(rings);    
    return 0; 
}