#include <stdio.h>

// Recursive function to compute the sum
int sumOfNaturalNumbers(int n) {
    if(n == 0) return 0;  // Base case
    return n + sumOfNaturalNumbers(n - 1);  // Recursive call
}

int main() {
    int n;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    int sum = sumOfNaturalNumbers(n);
    printf("The sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}