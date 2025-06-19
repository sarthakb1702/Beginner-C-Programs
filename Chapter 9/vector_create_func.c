#include <stdio.h>

    typedef struct vector{
        int i;
        int j; 
    }vec;
int main(){
    vec v1={2,3};
    printf("%di+%dj",v1.i,v1.j);
    return 0;
}
