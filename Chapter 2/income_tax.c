// Calculate income tax paid by an employee to the government as per the slabs mentioned below:
//   Income Slab    Tax
//   2.5 – 5.0L     5%
//   5.0L - 10.0L   20%
//   Above 10.0L    30%

#include <stdio.h>

int main(){
    int a;
    
    float tax1;
    float tax2;
    float tax3;
    float tax4;

    printf("enter your income:");
    scanf("%d",&a);

    if (a>250000 && a<=500000)
    {
     tax1=0.05*a;
        printf("you have to pay tax of rupees %f",tax1);
    }
    else if (a>500000 && a<=1000000)
    {
      tax2=0.2*a;
        printf("you have to pay tax of rupees %f",tax2);
    }
    else if (a>1000000)
    {
       tax3=0.3*a;
        printf("you have to pay tax of rupees %f",tax3);
    }
    else if (a<=250000)
    {
     tax4=0;
        printf("you don't have to pay any tax");
    }
    
    
    
    return 0;
}