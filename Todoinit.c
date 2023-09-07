#include <stdio.h>
#include <stdlib.h>

//#include "init.h"
#include "task.h"
#include "add.h"

//void Situation(int number);

int main(void){
    int decide;
    //int tasuku = 0;

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
    //while(decide != 4){
        switch(decide){
            case 1:
                numTask = 0;
                displayTasks();
                numTask++;
                break;
            case 2:
                addTask();
                //printf("2");
                break;
            case 3:
                printf("3");
                break;
            case 4:
                break;
            default:
                break;
        }
    //}

    if(decide == 4){
        return 0;
    }
    return 0;
}

//void Situation(int number){
    // switch(number){
    //     case 1:
    //         numTask = 0;
    //         displayTasks();
    //         numTask++;
    //         break;
    //     case 2:
    //         addTask();
    //         //printf("2");
    //         break;
    //     case 3:
    //         printf("3");
    //         break;
    //     case 4:
    //         break;
    //     default:
    //         break;
    // }
//}