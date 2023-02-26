#include "header.h"
#include "functions.c"

int main(void){
    char* file1 = createFile();
    char* file2 = createFile();
    char* file3 = createFile();
    fillFile(file1);
    fillDictionary(file2);
    FILE* pFile = fopen(file1, "r");
    char* temp = (char*)calloc(255, sizeof(char));
    int nums = numStrInFile(file1);
    printf("Your new text is : \n");
    for (int i = 0; i < nums; i++){
        fgets(temp, 255, pFile);
        parseStr(temp, file2, file3);
    }
    free(temp);
    fclose(pFile);
    getchar(); getchar();
    return 0;
}
