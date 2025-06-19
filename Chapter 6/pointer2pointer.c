#include <stdio.h>
int main(){
    int i=15;
    int*j=&i;
    int**k=&j;

    printf("The value of i is %d\n",i);
    printf("The value of i is %d\n",*j);
    printf("The value of i is %d\n",*(&i));
    printf("The value of i is %d\n",**(&j));
    printf("The value of i is %d\n",***(&k));

    printf("The address of i is %p\n",&i);
    printf("The address of i is %p\n",*(&j));
    printf("The address of i is %p\n",**(&k));

    return 0;
}