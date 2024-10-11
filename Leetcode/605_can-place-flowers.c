#include<stdio.h> 
#include<stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    char count = 0 ; 
    for(int i = 0 ; i < flowerbedSize ; i++){
        if(flowerbed[i] == 0 ){
            count++;
        }
        if((count == 2  && flowerbed[i - 1 ] == 0 && flowerbed[i + 1] == 0) || (i + 1 == flowerbedSize && flowerbed[i - 1] == 0 && count > 1))
            {  printf("i is %d \n",i);
                flowerbed[i] = 1;
                n--;
                count = 0 ; 
            }
    }
    printf("%d ",n);
    if(n <= 0)
        return true ;
    
    return false;
}
int main(){
    int flowerbed[] = {1,0,0,0,1}, n = 2;
    canPlaceFlowers(flowerbed , 5 , n);

    return 0; 
}