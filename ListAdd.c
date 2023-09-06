#include <stdio.h>
#include <stdlib.h>

#include "task.h"
#include "init.h"
#include "add.h"

void addTask(){
    Task tasks;
    int i;
    char str[256];

    printf("一日のやることを記載して\n");

    f = fopen("text.txt", "a+");
    if(f == NULL){
        perror("読み込み失敗\n");
        return;
    }

    fscanf(f, "%s", tasks.text);
    //scanf("%s", tasks.text);

    //fgets(str , sizeof(str), f);

    fprintf(f ,"%s", tasks.text);
    printf("%s", tasks.text);
    
    fclose(f);
}