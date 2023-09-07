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

    gets(tasks.text);

    f = fopen("text.txt", "a+");
    if(f == NULL){
        perror("読み込み失敗\n");
        return;
    }

    printf("一日のやることを記載して\n");
    while (gets(tasks.text) && strlen(tasks.text))
    {
        fputs(tasks.text, f);
        fputs("\n", f);
    }
    
    // for(i = 0; i < 5; i++){
    //     fscanf(f, "%c", tasks.text[i]);
    //     fprintf(f, "%c", tasks.text[i]);
    // }
    
    // fgets(&tasks.text[i] , sizeof(tasks.text[i]), stdin);

    // //printf("%s", tasks[i].text);
    fclose(f);

}