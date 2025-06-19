#include <stdio.h>

int main(){
    int array[10];
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
   
    int size=sizeof(array)/sizeof(array[0]);
    for (int i = size-1; i >=0; i--)
    {
        array[i]=a*(i+1);
        printf("%dx%d=%d\n",a,i+1,array[i]);
    }
    
    return 0;
}