#include <stdio.h>

    int sum(int*,int*);
    int sum(int*a,int*b){
        *a=6;
        *b=10;
        return (*a+*b);
    }

int main(){
    int x=2;
    int y=5;
    printf("The value of x is %d",&x);
    return 0;
}
