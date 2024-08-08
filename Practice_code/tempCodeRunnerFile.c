#include<stdio.h>
	#define INT_BITS	

	int leftRotate(int number, unsigned int d);
	int rightRotate(int number, unsigned int d);
	void printbinary(int num); 
	
	int leftRotate(int number, unsigned int d)  {
	
	return ((number << d)|(number >> (INT_BITS - d)));  }

	
	int rightRotate(int number, unsigned int d)  {
	
	return (number >> d)|(number << (INT_BITS - d));  }

 void printbinary(int num)  {
	for (int i=7; i>=0; i--) 	{
		printf("%d",(num >> i) & 1); }
	printf("\n");  }

 int main()  {
	int n, value; 
	printf("Enter a number: ");
	scanf("%d\n",&value); 
	printf("Enter the number of rotations: ");
	scanf("%d\n",&n); 
	printbinary(value); 
	// If n is negative
	if (n<0)
	{
	n = -(n);
	value = rightRotate(value, n);
	printf("After right shift, the value is %d \n",value);
	printbinary(value); 	}

	// If n is positive
	else if (n>0)
	{
	value = leftRotate(value, n);
	printf("After left shift, the value is %d \n",value);

	printbinary(value); }

 }
