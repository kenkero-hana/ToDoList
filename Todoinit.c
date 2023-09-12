#include <stdio.h>
#include <stdlib.h>

//#include "init.h"
#include "task.h"
#include "add.h"
#include "delete.h"

//void Situation(int number);

int main(void){
    int decide;
    //int tasuku = 0;
    while(1){
        printf("TODOリストを作成しよう\n");
        printf("----------------------------\n");
        printf("1:タスク表示\n");
        printf("2:タスク追加\n");
        printf("3:タスク削除\n");
        printf("4:タスク終了\n");
        printf("=============================\n");
        printf("どれにする？:");
        scanf("%d", &decide);

        // 状態遷移
        //Situation(decide);
        
            switch(decide){
                case 1:
                    displayTasks();
                    break;
                case 2:
                    addTask();
                    //printf("2");
                    break;
                case 3:
                    ListDelete();
                    //printf("3");
                    break;
                case 4:
                    printf("プログラムを終了します\n");
                    return 0;
                    break;
                default:
                    break;
            }
    }
    return 0;
}