// grading system

#include <stdio.h>

int main(){
    int n=3;
    char name[3][30];
    int score[3];
    char grade[3];

    for (int i = 0; i < n; i++)
    {
    printf("Enter student name:");
    scanf("%s",name[i]);
    printf("Enter student score:");
    scanf("%d",&score[i]);

    if (score[i]>=90)
    {
        grade[i]='O';
        printf("You have O grade\n");
    }
    else if (score[i]>=80 && score[i]<90)
    {
        printf("You have A grade\n");
        grade[i]='A';
    }
    else if (score[i]>=60 && score[i]<80)
    {
        grade[i]='B';
        printf("You have B grade\n");
    }
    else if (score[i]>=50 && score[i]<70)
    {
        grade[i]='C';
        printf("You have C grade\n");
    }
    else if (score[i]>=35 && score[i]<50)
    {
        grade[i]='D';
        printf("You have D grade\n");
    }else if (score[i]<35)
    {
        grade[i]='F';
        printf("You are fail\n");
    }
    }
    
     printf("\n--- Student Summary ---\n");
    for (int i = 0; i < n; i++)
    {
        printf("name:%s, score:%d grade:%c\n",name[i],score[i],grade[i]);
    }
    
    
    
    return 0;
}

