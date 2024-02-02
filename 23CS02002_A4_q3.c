#include <stdio.h>

int main()
{
    int credit_score, current_balance;
    float interest;
    printf("Entert the credit score and current balance");
    scanf("%d %d", &credit_score, &current_balance);

    if (credit_score < 600)
    {
        interest = current_balance * 0.15;
        printf("Calculated interest = %f", interest);
    }
    else if (credit_score >= 600 && credit_score <= 750)
    {
        interest = current_balance * 0.12;
        printf("Calculated interest = %f", interest);
    }
    else
    {
        interest = current_balance * 0.1;
        printf("Calculated interest = %f", interest);
    }

    return 0;
}