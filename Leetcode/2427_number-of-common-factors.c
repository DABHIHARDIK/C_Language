int commonFactors(int a, int b) {
    unsigned short min = a > b ? b : a ;
    unsigned char count = 0;
    for(unsigned short i = 1 ; i <= min ; i++ ) 
{
    if( a % i == 0 && b % i == 0)
        count++;
}
return count ;
}