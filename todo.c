// Detail: Program for todo app in C
// Author: Rishika Snehi
// Note:   Uncomment print statements for debugging or understanding the flow

#include <stdio.h>
#include <stdlib.h>

// Structure to store task items
struct Task
{
    char time[20];
    char details[100];
    char owner[20];
};

void completed_task()
{
    int mark_as_done;
    printf("enter the task number you want to mask as done\n");
    scanf("%d", &mark_as_done);
}

// Function to show the tasks entered in the list
void show_list(struct Task *tasks, int nums_tasks)
{
    for (int i = 0; i < nums_tasks; i++)
    {
        printf("Time : %s\tDetails : %s\tOwner : %s\n", tasks[i].time, tasks[i].details, tasks[i].owner);
    }
}

void create_task(struct Task *tasks, int num_tasks)
{
    for (int i = 0; i < num_tasks; i++)
    {
        printf("Enter time : ");
        gets(tasks[num_tasks].time);
        printf("Enter details : ");
        gets(tasks[num_tasks].details);
        printf("Enter owner : ");
        gets(tasks[num_tasks].owner);
    }
}

// Function to choose the desired operation and to run that operation
int run(struct Task *tasks, int num_tasks)
{

    int operation;
    char temp[10];
    char temp1[45];
    while (1)
    {
        printf("\n1. create new task\n\
2. enter task id to mark it done\n\
3. show list of tasks\n\
4. exit\n");
        printf("select operation : ");
        scanf("%d", &operation);
        // printf("Thank you for the input...\n");
        // gets(temp);
        switch (operation)
        {
        case 1:
            printf("Thank you for the input...\n");
            gets(temp);
            create_task(tasks, num_tasks);
            break;
        case 2:
            completed_task();
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
    struct Task *tasks;
    int num_tasks = 3;
    tasks = (struct Tasks *)malloc(num_tasks * sizeof(struct Task));
    run(tasks, num_tasks);
    return 0;
}
