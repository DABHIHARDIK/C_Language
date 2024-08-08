#include<stdio.h>


int minBitFlips(int start, int goal) {
    
int temp = start > goal ? start : goal;
printf("%d\n",temp);
int count = 0 ; 
while(temp > 0 ){
    if((start & 1) != (goal & 1)){
        count++;
        printf("count is %d\n",count);
    }
    start= start>>1;
    goal= goal>>1;
    temp = temp>>1;
    printf("start %d\n",start);
    printf("goal %d\n",goal);
    printf("temp %d\n\n",temp);
}
printf("count is %d",count);
return count;
}

int main(){

    minBitFlips(10,7);
    return 0 ; 

}