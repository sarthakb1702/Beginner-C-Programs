#include <stdio.h>

int main(){
    int addExpense;
    char name[30];
    int choice;
    int expenseNumber;
    int totalExpense=0;
    
    FILE*ptr;
    FILE*ptr1;

    ptr1 = fopen("expenses.txt", "r");
    if (ptr1 != NULL) {
        while (fscanf(ptr1, "%d-%[^\n]\n", &addExpense, name) != EOF) {
            totalExpense += addExpense;
        }
        fclose(ptr1);
    }
    while (1)
    {
        printf("Enter what you want to do:\n");
        printf("1. Add expense\n2. View expense\n3.Total expense\n4. Exit\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
    ptr=fopen("expenses.txt","a");
    if (ptr==NULL)
    {
        printf("Error adding expense.\n");
    }
    
    printf("Add expense:");
    scanf("%d",&addExpense);
    printf("Name of expense:");
    scanf(" %[^\n]",name);
    fprintf(ptr,"%d-%s\n",addExpense,name);
    fclose(ptr);
    printf("Expense added successfully!\n");
    totalExpense+=addExpense;
    break;

    case 2:
        ptr1=fopen("expenses.txt","r");
        if (ptr1==NULL)
    {
        printf("No expense found.\n");
        break;
    }
        expenseNumber=1;
        char buffer[50];
        while (fgets(buffer, sizeof(buffer),ptr1)){
            printf("%d.%s",expenseNumber,buffer);
            
            expenseNumber++;
        }fclose(ptr1);
        printf("\n\n");
        break;

    case 3:
        
        printf("The total amount of expense is %d \n\n",totalExpense);
        break;

    case 4:
        printf("Exiting-->");
        return 0;
    
    default:
        printf("Error");
        break;
    }
    }
    
    return 0;
}