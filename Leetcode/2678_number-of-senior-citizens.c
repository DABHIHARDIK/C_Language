#include<stdio.h> 

int countSeniors(char ** details, int detailsSize){
    int count = 0 ; 
    for( int i = 0 ; i < detailsSize ;i++){
        if((details[i][11] - '0') >= 6)
            count++;
    }

    return count;
}

int main(){
    char *details[] = {"7868190130M7522","5303914400F9211","9273338290F4010"};
    countSeniors(details , 3 );
    return 0;
}