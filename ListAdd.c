#include <stdio.h>
#include <stdlib.h>

#include "task.h"
#include "init.h"
#include "add.h"

void addTask(){
    Task tasks[TASK_MAX];
    int i;

    f = fopen("text.txt", "W");
    //if(f == NULL){
    //    return;
    //}

    printf("一日のやることを記載して\n");
    //for(i = 0; i < numTask; i++){
        //if(numTask == (int)NULL){
    scanf("%s", tasks[0].text);
        //}
        //else{
        //    return;
        //}

    fprintf(f, "%s",tasks[0].text);
    //}
    
    fclose(f);

    //printf("%s", tasks[0].text);
    //return 0;
}