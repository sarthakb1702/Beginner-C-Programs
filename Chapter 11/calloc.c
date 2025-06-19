#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int*ptr;
    ptr=(int*)calloc(n,sizeof(int));
    ptr[n];

    ptr[0]=5;
    printf("%d",ptr[0]);
    
    return 0;
}