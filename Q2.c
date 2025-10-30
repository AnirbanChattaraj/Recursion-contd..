// Print all odd numbers from 1 to N using recursion
// Input: 7 → Output: 1 3 5 7
#include <stdio.h>
void printOdd(int x, int y)
{

    if (x > y)
        return;
    printf("%d ", x);
    printOdd(x + 2, y);
}

int main()
{
    int n;
    printf("Enter your number: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Enter a positive number!");
        return 0;
    }

    printf("Odd numbers from 1 to %d:\n", n);
    printOdd(1, n);

    return 0;
}
