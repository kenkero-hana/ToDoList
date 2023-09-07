#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "task.h"
#include "add.h"

#define N 256

void displayTasks();


void displayTasks(){
    Task tasks[TASK_MAX];
    char str[N];
    

    f = fopen("text.txt", "r"); // "r"は読み込みモードを意味します

    if (f == NULL) {
        printf("ファイルを開けませんでした。\n");
        return;
    }
    printf("====タスク一覧====\n");
    while (fgets(str, N, f) != NULL) {
        printf("%s\n", str); // ファイルから読み込んだタスクを表示
    }

    fclose(f);
}