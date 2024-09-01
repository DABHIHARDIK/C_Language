#include<stdio.h> 
#include<stdlib.h> 
#include<stdbool.h>

typedef struct {
    int size[3];
} ParkingSystem;


ParkingSystem* parkingSystemCreate(int big, int medium, int small) {
    ParkingSystem *obj = malloc(sizeof(ParkingSystem));
    obj->size[0] = big; 
    obj->size[1] = medium; 
    obj->size[2] = small; 
    return obj ;
}

bool parkingSystemAddCar(ParkingSystem* obj, int carType) {
    if ( obj->size[carType-1]>0){
        obj->size[carType-1]-- ; 
        return true; 
    }
    return false; 
}

void parkingSystemFree(ParkingSystem* obj) {
    free(obj);
}

/**
 * Your ParkingSystem struct will be instantiated and called as such:
 * ParkingSystem* obj = parkingSystemCreate(big, medium, small);
 * bool param_1 = parkingSystemAddCar(obj, carType);
 
 * parkingSystemFree(obj);
*/