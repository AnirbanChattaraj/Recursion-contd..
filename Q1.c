// Print all even numbers from N to 1
// Input: 8 → Output: 8 6 4 2
#include <stdio.h>
void printEven(int x)
{
    if (x < 2)
        return;

    printf("%d ", x);

    printEven(x - 2);
}
int main()
{
    int n;
    printf("Enter an even number: ");
    scanf("%d", &n);
    if (n % 2 != 0)
    {
        printf("Please enter an even number!");
        return 0;
    }
    printf("Even numbers from %d to 1:\n", n);
    printEven(n);
    return 0;
}
