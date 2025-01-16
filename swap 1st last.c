#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, upp, swapped;
    // Assume the number 12345
    printf("Enter number: ");
    
    scanf("%d", &num);

    // Get the last digit of the number as integer
    last = (int) num % 10;

    // Get the total digit count - 1 as integer
    digits = (int) log10(num);

    // Get the max multiplier of the number Ex: 10000 means 1 * 10000 so upp = 10000
    upp = (int) round(pow(10, digits));

    // Get the first digit by dividing the number with upp Ex: 10000 / 10000 so first = 1
    first = (int) num / upp;

    // Start the swap number with last digit
    swapped = last;
    // Multiply the swapped value with it's upp, Ex: 5 * 10000 so now swapped = 50000
    swapped *= upp;
    // Add the remainder we get after dividing the number with upp to existing swapped value, Ex: 12345 % 10000 = 2345 so now swapped = 50000 + 2345 = 52345 
    swapped += num % upp;
    // Substract the last digit from current swapped value, Ex: 52345 - 5 so now swapped = 52340
    swapped -= last;
    // Add the first digit to current value of swapped, Ex: 52340 + 1 so now swapped = 52341
    swapped += first;

    // Print the final swappedd value
    printf("%d", swapped);
}