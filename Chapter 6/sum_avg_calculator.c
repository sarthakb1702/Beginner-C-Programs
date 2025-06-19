#include <stdio.h>

    float* sum(float,float);
    float* sum(float a,float b){
        float sum=a+b;
        float*ptr=&sum ;
        printf("The sum is %f\n",sum);
        return ptr;
    }

    float* average (float,float);
    float* average(float a,float b){
        float avg= (a+b)/2.0;
        float*ptr=&avg ;
        printf("The sum is %f\n", avg );
        return ptr;
    }

int main(){
    float x=5.0 , y=6.0 ;
    float* ptr1;
    float* ptr2;
    ptr1=sum(x,y);
    ptr2=average(x,y);
    
    printf("The address of sum is %p\n",ptr1);
    printf("The address of average is %p\n",ptr2);
    return 0;
}