#include <stdio.h>
#include <stdlib.h>

#include "init.h"
#include "task.h"


int main(void){
    int decide;
    int tasuku = 0;

    printf("TODOリストを作成しよう\n");
    printf("----------------------------\n");
    printf("1:タスク表示\n");
    printf("2:タスク追加\n");
    printf("3:タスク削除\n");
    printf("=============================\n");
    printf("どれにする？:");
    scanf("%d", &decide);

    // 状態遷移
    Situation(decide);
    
    return 0;
}

void Situation(int number){
    switch(number){
        case 1:
            displayTasks();
            numTask++;
            break;
        case 2:
            printf("2");
            break;
        case 3:
            printf("3");
            break;
        case 4:
            break;
        default:
            break;
    }
}