#include <stdio.h>
float avg(float a, float b, float c);
float avg(float a, float b, float c){
    printf("the average of %f ,%f ,%f is %f",a,b,c,(a+b+c)/3);
}
float main(){
    float x,y,z;
    printf("enter first number:");
    scanf("%f",&x);

    printf("enter second number:");
    scanf("%f",&y);

    printf("enter third number:");
    scanf("%f",&z);

    avg(x,y,z);
    return 0;
}
