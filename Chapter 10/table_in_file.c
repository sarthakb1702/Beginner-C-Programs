#include <stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("table.txt","a");

    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    
    for (int i = 0; i < 10; i++)
    {
        int c=(n*(i+1));
        fprintf(ptr,"%dx%d=%d\n",n,i+1,n*(i+1));
        
    }
    
    return 0;
}