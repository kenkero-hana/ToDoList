#ifndef _TASK_H_
#define _TASK_H_

int numTask;

typedef struct 
{
    char text[100];
    int completed;
}Task;

void displayTasks();

#endif