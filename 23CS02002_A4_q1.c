#include <stdio.h>

int main()
{
    int a, num;
    printf("Enter the number:\n");
    scanf("%d", &num);

    a = num % 2;

    switch (a)
    {
    case 0:
        printf("Entered number is even");
        break;

    default:
        printf("Entered number is odd");
        break;
    }

    return 0;
}