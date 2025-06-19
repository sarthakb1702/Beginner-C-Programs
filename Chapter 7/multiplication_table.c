#include <stdio.h>

int main(){
    int array[10];
    int a;
    printf("Enter a number:");
    scanf("%d",&a);
   
    for (int i = 0; i < 10; i++)
    {
        array[i]=a*(i+1);
        printf("%dx%d=%d\n",a,i+1,array[i]);
    }
    
    return 0;
}