#include<stdbool.h> 

char* destCity(char*** paths, int pathsSize, int* pathsColSize) {
  char *current = paths[0][1]; // "New York"
  bool set = true ; 
  while(set){
    set = false ;
    for(int i = 0 ; i < pathsSize ; i++){
        if(strcmp(current , paths[i][0]) == 0 ){
            set = true ; 
            current = paths[i][1];
            break;
        }
    }
  }
  return current ; 
}