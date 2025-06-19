#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int *ptr;
    ptr=(int*)malloc(n*sizeof(int));

    ptr[0]=3;
    ptr[1]=5;

    printf("%d",ptr[0]);
    return 0;
}