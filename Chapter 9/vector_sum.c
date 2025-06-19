#include <stdio.h>
    typedef struct vector{
        int i;
        int j;
    }vec;
    struct vector sumvector(vec v1,vec v2)
    {
        vec v3={v1.i+v2.i, v2.i+v2.j};
        return v3;
    };

int main(){
    vec v1={2,3};
    vec v2={3,6};
    vec v3=sumvector(v1,v2);
    printf("%di + %dj",v3);
    return 0;
}
