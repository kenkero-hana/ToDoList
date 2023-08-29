#ifndef _TASK_H_
#define _TASK_H_

int numTask = 0;

typedef struct 
{
    char text[100];
    int completed;
}Task;

extern void displayTasks();

#endif