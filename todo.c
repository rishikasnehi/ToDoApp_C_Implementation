// Detail: Program for todo app in C
// Author: Rishika Snehi
// Note:   Uncomment print statements for debugging or understanding the flow

#include <stdio.h>

// Structure to store task items
struct Task
{
    char time[20];
    char details[100];
    char owner[20];
};

// Function to show the tasks entered in the list
void show_list(struct Task tasks[], int nums_tasks)
{
    for (int i = 0; i < nums_tasks; i++)
    {
        printf("Time : %s\tDetails : %s\tOwner : %s\n", tasks[i].time, tasks[i].details, tasks[i].owner);
    }
}

// Function to choose the desired operation and to run that operation
int run(struct Task tasks[], int num_tasks)
{

    int operation;
    while (1)
    {
        printf("\n1. create new task\n\
2. enter task id to mark it done\n\
3. show list of tasks\n\
4. exit\n");
        printf("select operation : ");
        scanf("%d", &operation);
        switch (operation)
        {
        case 1:
            printf("In progress\n");
            break;
        case 2:
            printf("In progress\n");
            break;
        case 3:
            show_list(tasks, num_tasks);
            break;
        case 4:
            printf("exiting...\n");
            return 1;
        default:
            printf("inavlid output\n");
            printf("please enter again\n");
            break;
        }
    }
}

int main()
{
    struct Task tasks[3] =
        {
            [0] = {.time = "24 oct 23, 12:30", .details = "complete physics work", .owner = "Rishika"},
            [1] = {"24 oct 23, 13:30", "complete chemistry work", "Rishika"},
            [2] = {"24 oct 23, 14:30", "complete maths work", "Rishika"},
        };
    int num_tasks = sizeof(tasks) / sizeof(tasks[0]);
    run(tasks, num_tasks);
    return 0;
}
