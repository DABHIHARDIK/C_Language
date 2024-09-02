#include <stdio.h>
#include <stdlib.h>
int largestAltitude(int *gain, int gainSize)
{

    short temp = 0 ; 
    short largenumber = 0;
    for (short i = 0; i < gainSize; i++)
    {
        temp += gain[i];
        if (largenumber < temp)
            largenumber = temp;
    }
    return largenumber;
}

int main()
{
    int gain[] = {-4, -3, -2, -1, 4, 3, 2};
    largestAltitude(gain, 7);
    return 0;
}