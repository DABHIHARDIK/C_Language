#include<stdio.h> 

int deleteGreatestValue(int** grid, int gridSize, int* gridColSize) {
    int max = 0 ,checkmax = 0 ; 
    int sum = 0 ; 
    int index = 0 ; 
    for(int k = 0 ; k < *gridColSize ;k++){
        checkmax = 0;
        for(int i = 0 ; i < gridSize ; i++){
            max = 0;
            for(int j = 0 ; j < *gridColSize ; j++){
                if(grid[i][j] > max){
                    max = grid[i][j];
                    index = j ; 
                }
            }
            if(checkmax < max)
                checkmax = max ;
            grid[i][index] = 0 ;
        }
        sum += checkmax;
    }
    printf("%d",sum);
    return sum;
}

int main(){
    int *grid[] = {{1,2,4},{3,3,1}} ;
    int size = 3 ;
    deleteGreatestValue(grid , 2 , &size);
    return 0;
}