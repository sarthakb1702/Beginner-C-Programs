#include <stdio.h>

int main(){
    char a='S';
    char*b=&a;
    printf("Adress of a is %p\n",b);
    printf("Adress of a is %p\n",&a);

    float x=3.14;
    float*y=&x;
    printf("Adress of x is %p\n",y);


    return 0;
}