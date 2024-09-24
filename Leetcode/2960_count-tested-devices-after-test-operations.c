#include<stdio.h> 

int countTestedDevices(int* batteryPercentages, int batteryPercentagesSize) {
    int out =0 ;
    for(int i = 0 ; i < batteryPercentagesSize ; i++){
        if((batteryPercentages[i] - out) > 0 ){
            out++;
        }
    }
    // printf("%d ", out);
    return out;
}

int main(){
    int batteryPercentages[] = {1,1,2,1,3};
    countTestedDevices(batteryPercentages , 6);
    return 0 ; 
}