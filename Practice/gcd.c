#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main()
{
    int a, b ;
    printf("Enter a number:");
    scanf("%d",&a);
    printf("Enter a number:");
    scanf("%d",&b);
    gcd(a, b);
    printf("%d", gcd(a, b));
    return 0;
}   