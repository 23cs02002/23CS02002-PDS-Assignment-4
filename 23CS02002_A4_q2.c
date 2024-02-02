#include <stdio.h>
int maximum(int a, int b )
{
    int ans = (a > b)? a : b ;
    return ans;
}
int main()
{
    int int1, int2 , int3;
    printf("Enter three integers:\n");
    scanf("%d %d %d", &int1, &int2 , &int3);

    printf("Largest number = %d", maximum((int1, int2), int3));
    return 0;
}