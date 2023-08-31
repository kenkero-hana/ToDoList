#include <stdio.h>

#include "init.h"
#include "task.h"

void displayTasks();


void displayTasks(){
    Task tasks[TASK_MAX];
    printf("====タスク一覧====\n");
    for(int i = 0; i < numTask; i++){
        //scanf("%s", &tasks[i].text);
        printf("%d.%s\n", i + 1, tasks[i].text);
    }
}