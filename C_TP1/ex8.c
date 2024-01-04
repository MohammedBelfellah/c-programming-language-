#include <stdio.h>

// her is a problem about infinite loops 
// don not run this program (belfellah!)
int main()
{
    printf("Three-digit numbers divisible by the sum of their digits:\n");

    for (int number = 100; number <= 999; number++)
    {
        int originalNumber = number;
        int sumOfDigits = 0;
        int tempNumber = number; // Use a temporary variable to avoid modifying the original number

        // Calculate the sum of digits
        while (tempNumber > 0)
        {
            sumOfDigits += tempNumber % 10;
            tempNumber /= 10;
        }

        // Check if the original number is divisible by the sum of its digits
        if (originalNumber % sumOfDigits == 0)
        {
            printf("%d\n", originalNumber);
        }
    }

    return 0;
}
