/*
0> what is enumerator??
it gives an opportunity to invent own data types and define what values the variable of this data type can take .

User defin data types --> structure , union and enumerators

enum month {
jan=1(start from 1 then feb =2), feb, mar, apr, may , jun, jul , aug, sep , oct , nov, dec
};

enum boolen{
false, true
};
*/

#include <stdio.h>

enum boolean
{
    false,
    true
};

enum boolean data; 

enum boolean isEven(int x)
{

    if (x % 2 == 0)
    {
        return (true);
    }
    else
        return (false);
}

int main()
{
    int n = 0;
    enum boolean result;
    printf(" enter a number ");
    scanf(" %d", &n);
    result = isEven(n);
    if (result == true)
        printf(" even number");
    else
        printf(" old number ");
    return 0;
}