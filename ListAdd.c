#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task.h"
#include "init.h"
#include "add.h"

void addTask(){
    Task tasks;
    int i;
    char str[256];

    fgets(tasks.text, sizeof(tasks), stdin);

    f = fopen("text.txt", "a+");
    if(f == NULL){
        perror("読み込み失敗\n");
        return;
    }

    printf("一日のやることを記載して\n");
    // fgetでキーボードからテキストを読み取る
    while(fgets(tasks.text, sizeof(tasks), stdin) != NULL && strlen(tasks.text) > 1)
    {
        fputs(tasks.text, f);
    }

    fclose(f);

}