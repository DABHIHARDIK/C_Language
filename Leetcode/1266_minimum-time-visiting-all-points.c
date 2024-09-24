#include<stdio.h> 
#include<stdlib.h> 

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
  int minpoints = 0 ; 
  for( int i = 0 ; i < pointsSize - 1 ; i++){
    minpoints += abs (points[i][0] - points[i+1][0]) > abs (points[i][1] - points[i+1][1]) ? abs (points[i][0] - points[i+1][0]) : abs (points[i][1] - points[i+1][1]);
  }
return minpoints;
}

int main(){
    int ar1[] = {1,1};
    int ar2[] = {3,4};
    int ar3[] = {-1,0};
    
    int *points[] = {ar1 , ar2 , ar3};
    int pin  = 2 ; 
    minTimeToVisitAllPoints(points , 3 , &pin);
    return 0 ;
}