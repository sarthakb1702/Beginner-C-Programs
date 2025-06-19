#include <stdio.h>
#include <string.h>

char number[100][11];
char name[100][30];
int count = 0;
void addContact()
{
    printf("Enter phone number to add :");
    scanf("%s", number[count]);

    getchar();
    printf("Enter name :");
    fgets(name[count], sizeof(name[count]), stdin);

    if (name[count][strlen(name[count]) - 1] == '\n')
    {
        name[count][strlen(name[count]) - 1] = '\0';
    }
    count++;

    printf("Contact saved successfully\n");
    printf("\n");
}

void searchContact()
{
    if (count > 0)
    {
        printf("<--- Contacts--->\n");
        for (int i = 0; i < count; i++)
        {
            printf("%d.%s-%s\n",i+1, name[i], number[i]);
        }
        printf("\n");
    }
    else
    {
        printf("No contact saved.\n\n");
    }
    
}


int main()
{
    int choice;
    while (1)
    {
        printf("<--- Contact manager --->\n");
        printf("1.Add contact\n2.view contacts\n3.Exit\n");

        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addContact();
            break;

        case 2:
            searchContact();
            break;

        case 3:
            printf("Exiting--->");
            return 0;

        default:
            printf("Invalid choice. Please try again");
        }
    }

    return 0;
}