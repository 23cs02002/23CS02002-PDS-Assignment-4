#include <stdio.h>

int main(){
    int age;
    printf("Enter the age:\n");
    scanf("%d", &age);

    if (age>0 && age<5) printf("Free");
    else if (age>=5 && age<=12) printf("20");
    else if (age>=13 && age<=59) printf("50");
    else if (age>=60) printf("40");
    else printf("Invalid input");

    return 0;
}