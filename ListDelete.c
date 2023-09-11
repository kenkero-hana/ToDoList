#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "task.h"
#include "init.h"
#include "add.h"

void ListDelete(){
    Task tasks;
    FILE *inputFile, *outputFile;

    int lineToDelete = 0;
    char inputFileName[] = "text.txt";
    char outputFileName[] = "temp.txt";
    
    inputFile = fopen(inputFileName, "r");
    outputFile = fopen(outputFileName, "w");

    if (inputFile == NULL || outputFile == NULL) {
        perror("ファイルを開けませんでした。\n");
        return;
    }

    // ユーザーに行番号を尋ねる
    printf("削除する行番号か全部削除したい場合はdeleteを入力してください: ");
    scanf("%d", &lineToDelete);

    char buffer[1000]; // 1行の最大長
    int currentLine = 1;

    while (fgets(buffer, sizeof(buffer), inputFile) != NULL) {
        if (currentLine != lineToDelete) {
            fputs(buffer, outputFile);
        }
        currentLine++;
    }

    FILE *file = fopen(inputFileName, "w"); // "w"モードでファイルを開く（既存のファイルを空にする）
    if (file == NULL) {
        perror("ファイルを開けませんでした。\n");
        return;
    }
    fclose(file);
    printf("ファイルがクリアされました。\n");

    fclose(f);
    fclose(inputFile);
    fclose(outputFile);

    // 元のファイルを削除
    if (remove(inputFileName) != 0) {
        perror("ファイルの削除に失敗しました。\n");
        return;
    }

    // 一時ファイルを元のファイル名にリネーム
    if (rename(outputFileName, inputFileName) != 0) {
        perror("ファイルのリネームに失敗しました。\n");
        return;
    }

    printf("行 %d が削除されました。\n", lineToDelete);

}
