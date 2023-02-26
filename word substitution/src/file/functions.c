#include "header.h"


char* createFile(){
    char* str = (char*)calloc(255, sizeof(char));
    printf("Enter the name of the file : ");
    gets(str);
    FILE* pFile = fopen(str, "w");
    fclose(pFile);
    return str;
}

void fillFile(char* str){
    int nums;
    printf("Enter the num of strings in FILE : ");
    scanf_s("%d", &nums);
    char* temp = (char*)calloc(255, sizeof(char));
    FILE* pFile = fopen(str, "r+");
    rewind(stdin);
    for (int i = 0; i < nums; i++){
        fgets(temp, 255, stdin);
        for (int j = 0; j < strlen(temp); j++){
            fputc(temp[j], pFile);
        }
    }
    rewind(pFile);
    fclose(pFile);
}

void fillDictionary(char* str){
    FILE* pFile = fopen(str, "r+");
    char* temp = (char*)calloc(255, sizeof(char));
    printf("Enter the dictionary(1-st word replacing with 2nd) : ");
    fgets(temp, 255, stdin);
    fputs(temp, pFile);
    fclose(pFile);
}

void parseStr(char* temp, const char* filename2, const char* filename3){
    FILE* f2 = fopen(filename2, "r");
    FILE* f3 = fopen(filename3, "a");
    char* string = (char*)calloc(255, sizeof(char));
    char* text = (char*)calloc(255, sizeof(char));
    char* sep = ",";
    char* word = (char*)calloc(255, sizeof(char));
    bool flag = false;
    int j = 0;
    char ch = '\0';
    for (int i = 0; i < strlen(temp); i++){
        char separator = temp[i];
        if(separator == ',' || separator == ';' || separator == ' ' || separator == '.'){
            rewind(f2);
            fgets(string, 254, f2);
            char* src_word = strtok(string, sep);
            char* srb_word = strtok(NULL,sep);
            word[j] = '\0';
            while(srb_word != NULL && src_word[strlen(src_word) - 1] != '\n'){
                if (strcmp(word, src_word) == 0) {
                    strcat(text, srb_word);
                    strcat(text, &ch);
                    strcat(text, &separator);
                    flag = true;
                    break;
                }
                src_word = strtok(NULL, sep);
                srb_word = strtok(NULL,sep);
            }
            if(flag == false){
                strcat(text, word);
                strcat(text, &ch);
                strcat(text, &separator);
            }
            word[0] = '\0';
            j = 0;
            flag = false;
        }
        else{
            word[j++] = temp[i];
        }
    }
    puts(text);
    strcat(text, "\n");
    fputs(text, f3);
    free(string);
    free(text);
    fclose(f2);
    fclose(f3);
}

int numStrInFile(char const* filename){
    int cnt = 0;
    FILE* pFile = fopen(filename, "r");
    do{
        char* str = (char*)calloc(255, sizeof(char));
        fgets(str, 255, pFile);
        if(feof(pFile)) break;
        cnt++;
    }while(1);
    return cnt;
}
