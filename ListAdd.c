#include <stdio.h>

#include "task.h"
#include "init.h"

void addTask(){
    if (numTask < TASK_MAX) {
        strcpy(tasks[numTasks].text, text);
        tasks[numTasks].completed = 
        tasks[numTasks].completed = 
        numTasks++;
        printf("タスクを追加しました。\n");
    } else {
        printf("タスクの数が上限に達しています。\n");
    }
}