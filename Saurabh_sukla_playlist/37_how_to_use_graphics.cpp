/*
0> Graphics 
    - BGI stands for bolend graphics interface provide graphics drivers
0> Issue with graphics header file 
    - Code block's gcc compiler doesn't have dos based graphics library, so when you include graphics.h 
     it yields error message
     
*/
#include<stdio.h>
#include<graphics.h>

int main(){
    int gd=0,gm; // auto mode gd = 0 , gm 
    // initgraph(&gd,&gm,"");
    char data[] ="";
    initgraph(&gd,&gm,data);
    circle(500,500,30);
    scanf("%d",&gd);
    closegraph();
    
    return 0;
}

