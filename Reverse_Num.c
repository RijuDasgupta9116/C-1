/*
C Program to Reverse a Number
Example to reverse an integer entered by the user. This problem is solved using while loop in this example.
*/

#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &n);
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
    printf("Reversed Number = %d", reversedNumber);
    return 0;
}
