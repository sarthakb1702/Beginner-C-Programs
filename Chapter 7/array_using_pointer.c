#include <stdio.h>

int main(){
    int numbers[]={12,34,56,85};
    int*ptr =&numbers[0];
    for (int i = 0; i < 4; i++)
    {
        // printf("The numbers at %d are %d\n", i, &numbers[i]);
        printf("The numbers at %d are %d\n", i, *ptr);
        ptr++;
    }
    
    return 0;
}