#include <stdio.h>

float con(float);
float con(float c){
    return ((c*9)/5) + 32;
}

int main(){
    float c;
    printf("Enter temperature in celcius:");
    scanf("%f",&c);
    // float c =45;
    printf("%f celcius to fahrenheit is %.2f", c , con(c));
    return 0;
}
