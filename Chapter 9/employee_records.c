#include <stdio.h>

    struct employee
    {
        int code;
        float salary;
        char name[50];
    };
    
int main(){
    struct employee e1,e2,e3;

    printf("Enter name of employee:");
    scanf("%s",e1.name);

    printf("Enter code of employee:");
    scanf("%d",&e1.code);
    
    printf("Enter salary of employee:");
    scanf("%f",&e1.salary);

    printf("%s%d %.1f\n",e1.name,e1.code,e1.salary);
    
    printf("Enter name of employee:");
    scanf("%s",e2.name);

    printf("Enter code of employee:");
    scanf("%d",&e2.code);
    
    printf("Enter salary of employee:");
    scanf("%f",&e2.salary);

    printf("%s%d %.1f\n",e2.name,e2.code,e2.salary);

    printf("Enter name of employee:");
    scanf("%s",e3.name);

    printf("Enter code of employee:");
    scanf("%d",&e3.code);
    
    printf("Enter salary of employee:");
    scanf("%f",&e3.salary);

    printf("%s%d %.1f\n",e3.name,e3.code,e3.salary);
    
    return 0;
}