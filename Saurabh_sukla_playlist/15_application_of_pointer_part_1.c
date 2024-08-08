#include <stdio.h>
void add(int, int);
void swap(int * , int *);
int main()
{
    int a = 10, b = 20;
    printf( " before swap value of a = %d and b = %d\n", a ,b );
    swap( &a, &b );
    printf( " after swap value of a = %d and b = %d\n", a ,b );
    add(a, b);//Actual argument in function ()
    return 0;
}

void add(int x, int y) // Formal argument in functio ()
{

    printf(" %d", x+y);
}
void swap( int *x, int *y)//call by reference as well as call by address in c 
// why we used call value because we are accessing direct variable exm. consider want to change swpa to number how to do ??
// then we need to pass address of that variable if passing value then it will not change in variabel 
{

    int t; 
    t = *x; 
    *x = *y;
    *y = t ; 
}

// scanf( " %d", &a) why we use & in scanf because of scanf is function and we are adding this value into the variable that why scanf need address of variable 