#include <stdio.h>


float force(float);
    
float force(float(mass)){
        return mass*9.8; 
    }
int main(){
    float a;
    printf("Enter mass:");
    scanf("%f",&a);
    int f;
    printf("the force is %.2f",force(a));
    return 0;
}