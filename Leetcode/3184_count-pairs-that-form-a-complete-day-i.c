#include<stdio.h> 

int countCompleteDayPairs(int* hours, int hoursSize) {
    int count24 = 0 ; 
    for(int i = 0 ; i < hoursSize ; i++){
        for ( int j = i+ 1; j < hoursSize ; j++){
            if( hours[i] + hours[j] % 24 == 0 ){
                count24++;
            }
        }
    }

    return count24;
}

int main(){
    int hours[] = {12,12,30,24,24};
    countCompleteDayPairs(hours , 5);
    return 0 ; 
}