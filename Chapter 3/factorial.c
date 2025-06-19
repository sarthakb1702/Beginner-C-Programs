// Write a program to calculate the factorial of a given number using a for loop

#include <stdio.h>

int main(){
    int product=1;
    int n;

    printf("enter a number:");
    scanf("%d",&n);

    for (int i=1; i<=n; i++)
    {
     product*=i;

    }
        printf("factorial of %d is %d",n,product);
    return 0;
}