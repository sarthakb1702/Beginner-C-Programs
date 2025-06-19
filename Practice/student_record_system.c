#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num_students;
    int rollNo;
    int marks;

    printf("Enter number of students:");
    scanf("%d", &num_students);

    rollNo = num_students;
    marks = num_students;

    char **ptr1 = (char **)calloc(num_students, sizeof(char *));
    int *ptr2 = (int *)calloc(rollNo, sizeof(int));
    int *ptr3 = (int *)calloc(marks, sizeof(int));

    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL)
    {
        printf("Memory allocation failed..\n");
        return 1;
    }

    for (int i = 0; i < num_students; i++)
    {
        ptr1[i] = (char *)calloc(100, sizeof(char));
        printf("Enter name of student:");
        scanf(" %[^\n]s", ptr1[i]);

        printf("Enter roll number:");
        scanf("%d", &ptr2[i]);

        printf("Enter marks:");
        scanf("%d", &ptr3[i]);
    }
    printf("\nName                Roll number    Marks\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < num_students; i++)
    {
        printf("%-23s %-12d %-10d\n", ptr1[i], ptr2[i], ptr3[i]);
    }
    for (int i = 0; i < num_students; i++)
    {
        free(ptr1[i]);
    }
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
