
#include<stdio.h>


/* 
FILE OPEN MODE 
r --> if file note exist then new file will not create and file pointer == NULL 
r+ --> if you want to modidfication in file particular line then this only mode work other things same as r file will not crate if not exist but you can write in file if exist
w --> writing mode if file not present then it will crate a new file and if present then erase all data from file and write whatever you will give 
w+ --> same as a W but you can read also 
a --> a means append in file 
a+ --> reading and writing possible adn append also 

+ --> meaning READ and WRITE both 

*/
int main(){

FILE *FP ;
FP = fopen("26_file_modes.txt","w");
if (FP == NULL)
{
    printf( " file is not opened ");
}


    return 0 ; 
}