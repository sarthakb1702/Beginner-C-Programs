#include <stdio.h>

int main(){
    int a=17;
    printf("The adress of a is %p\n",&a);
    printf("The adress of a is %u\n",&a);

    int* b= &a;  //b is a pointer pointing to a
    printf("The adress of b is %p\n",b);

    printf("The value at adress of a is %d\n",*(&a)); // *(&a)=a
    printf("The value at adress of b is %d\n",*b);
    return 0;
}