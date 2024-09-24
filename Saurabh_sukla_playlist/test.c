#include<stdio.h> 
#include<stdint.h> 

int main(){
    uint8_t data = 0xAB; 
    // uint8_t revesebit = 0 ;

   for(int i = 0 ; i < 4 ; i++){
    
        if(((data >> i)  & 1 ) != ((data >> (7 - i) ) & 1))
            {
                data ^= ( 1 << i);
                data ^= ( 1 << ( 7 - i));
            }
   }
   printf("%x",data);
    return 0; 
}