#include <stdio.h>

int countDigits(int num)
{
    int nums = num;
    int temp = 0, count = 0;
    while(1<=num)
    {
        temp = num % 10;
        if (nums % temp == 0)
        {
            count++;
        }
        num = num / 10;
    }
    return count;
}

int main()
{
    countDigits(1248);
    return 0;
}