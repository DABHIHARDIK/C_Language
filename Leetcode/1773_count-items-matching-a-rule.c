#include<stdio.h>

int countMatches(char*** items, int itemsSize, int* itemsColSize, char* ruleKey, char* ruleValue) {
    int count = 0 ; 
    int value = 0 ;
    if ( !strcmp(ruleKey , "type"))
        value = 0; 
    else if ( !strcmp(ruleKey , "color"))
        value = 1;
    else
        value = 2 ;
    for( int i = 0 ; i < itemsSize ; i++){
        if( !strcmp(items[i][value],ruleValue))
            count++;
    }
    printf( " %d",value);
return count ;
}