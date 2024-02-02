#include <stdio.h>

int main()
{
    int num1, num2;
    char op;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);

    printf("Enter + for addition, - for subtraction, * for multiplication and / for division:\n");
    scanf(" %c", &op);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;

    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;

    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;

    case '/':
        printf("%d / %d = %f", num1, num2, (num1 * 1.0 / num2));
        break;

    default:
        printf("Entered operation is not allowed");
        break;
    }

    return 0;
}