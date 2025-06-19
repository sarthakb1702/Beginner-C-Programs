#include <stdio.h>

int natural(int);
int natural(int n){
    
    if (n==1){
        return 1;
    }
    return natural(n-1)+n;
}
int main(){
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
    
    printf("the sum of first n natural numbers is %d",natural(a));
    return 0;
}