#include <stdio.h>
#include <stdlib.h>

int main()
{
    char task[30];
    char ch;
    int choice;
    int tasknumber;
    int deleteTaskNumber;

    while (1)
    {

        printf("Enter what you want to do:\n");
        printf("1. Add task\n2. View tasks\n3. Delete task\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();

        FILE *ptr;
        FILE *ptr1;
        FILE *tempPtr;

        switch (choice)
        {
        case 1:
            ptr = fopen("taskmanager.txt", "a");
            if (ptr == NULL)
            {
                printf("Error opening file!");
                return 1;
            }
            printf("Enter a task:\n");
            fgets(task,sizeof(task),stdin);

            fprintf(ptr, "%s\n", task);
            printf("Task added successfully\n");
            fclose(ptr);
            break;

        case 2:
            ptr1 = fopen("taskmanager.txt", "r");
            if (ptr1 == NULL)
            {
                printf("Error opening file!");
                return 1;
            }
            tasknumber = 1;
            printf("Tasks:\n");
            while (fgets(task, sizeof(task), ptr1) != NULL)
            {
                printf("%d. %s", tasknumber, task);
                tasknumber++;
            }
            fclose(ptr1);
            break;

        case 3:
            ptr1 = fopen("taskmanager.txt", "r");
            tempPtr = fopen("temp.txt", "w");
            if (ptr1 == NULL || tempPtr == NULL)
            {
                printf("Error opening file!\n");
                return 1;
            }
            tasknumber = 1;
            printf("Tasks:\n");
            while (fgets(task, sizeof(task), ptr1) != NULL)
            {
                printf("%d. %s", tasknumber, task);
                tasknumber++;
            }
            printf("Enter the number of the task you want to delete: ");
            scanf("%d", &deleteTaskNumber);
            rewind(ptr1);
            tasknumber = 1;
            while (fgets(task, sizeof(task), ptr1) != NULL)
            {
                if (tasknumber != deleteTaskNumber)
                {
                    fputs(task, tempPtr);
                }
                tasknumber++;
            }
            fclose(ptr1);
            fclose(tempPtr);
            remove("taskmanager.txt");
            rename("temp.txt", "taskmanager.txt");
            printf("Task deleted successfully\n");
            break;

        case 4:
            printf("Exiting....");
            return 0;

        default:
            printf("Invalid choice. Please try again.\n");
        }
        printf("\n");
    }
    
    return 0;
}
