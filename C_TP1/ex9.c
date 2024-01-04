#include <stdio.h>

int main()
{
    int N;

    // Input validation loop
    do
    {
        printf("Enter a number (N < 10): ");
        scanf("%d", &N);

        if (N >= 10)
        {
            printf("Please enter a number less than 10.\n");
        }
    } while (N >= 10);

    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
