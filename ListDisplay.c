#include <stdio.h>

#include "init.h"
#include "task.h"
#include "add.h"

void displayTasks();


void displayTasks(){
    Task tasks[TASK_MAX];

    f = fopen("text.txt", "r"); // "r"は読み込みモードを意味します

    if (f == NULL) {
        printf("ファイルを開けませんでした。\n");
        return;
    }
    printf("====タスク一覧====\n");
    while (fgets(tasks->text, sizeof(tasks), f) != NULL) {
        printf("%s", tasks->text); // ファイルから読み込んだタスクを表示
    }

    fclose(f);
}