#include <stdio.h>

int main()
{
    int num, n1, n2, n3;
    printf("Enter a three digit number:\n");
    scanf("%d", &num);

    if (num < 100 && num > 999)
    {
        printf("Incorrect input.");
    }

    else
    {
        n3 = num % 10;
        n2 = (num / 10) % 10;
        n1 = num / 100;

        if (n1 * n1 * n1 + n2 * n2 * n2 + n3 * n3 * n3 == num)
            printf("Yes");
        else
            printf("No");
    }

    return 0;
}