// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void showMenu() {
    printf("********************************\n");
    printf("********************************\n");
    printf("**          1. add            **\n");
    printf("**          2. view           **\n");
    printf("**          3. remove         **\n");
    printf("********************************\n");
    printf("********************************\n");
}

int main() {
    bool isRunning = true;
    char* input = (char*)calloc(110, sizeof(char));
    char* input_command = (char*)calloc(10, sizeof(char));
    char* input_param = (char*)calloc(10, sizeof(char));
    char** todo_list = (char**)calloc(100, sizeof(char));
    for (int i = 0; i < 100; i++) {
        todo_list[i] = (char*)calloc(50, sizeof(char));
    }
    int todo_list_index = -1;
    bool isFirst = true;
    while (isRunning) {
        if (!isFirst) {
            getchar();
        }
        strcpy(input, "");
        showMenu();
        scanf("%[^\n]s", input);
        
        printf("input:%s\n", input);
        
        strcpy(input_command, strtok(input, " "));
        char* input_param_tok = strtok(NULL, " ");
        if (input_param_tok != NULL) {
            try {
                strcpy(input_param, input_param_tok);
            }
            catch ( ... ) {
                printf("올바르지 않은 명령어어");
            }
        }
        
        printf("input_command:%s\n", input_command);
        printf("input_param:%s\n", input_param);
        
        if (strcmp(input_command, "add") == 0) {
            if (input_param != NULL) {
                            strcpy(todo_list[todo_list_index + 1], input_param);
                todo_list_index++;
                printf("할 일이 추가되었습니다.");
            }
            else {
                printf("올바르지 않은 명령어어");
            }
        }
        else if (strcmp(input_command, "view") == 0) {
            if (todo_list_index != -1) {
                for (int i = 0; i <= todo_list_index; i++) {
                    printf("%d\. %s\n", i, todo_list[i]);
                }
            }
            else {
                printf("항목이 없습니다");
            }
        }
        else if (strcmp(input_command, "remove") == 0) {
            if (todo_list_index != -1) {
                if (todo_list_index >= atoi(input_param)) {
                    strcpy(todo_list[atoi(input_param)], "");
                    for (int i = atoi(input_param) + 1; i <= todo_list_index; i++) {
                        strcpy(todo_list[i - 1], todo_list[i]);
                    }
                    todo_list_index--;
                }
            }
            
            printf("%d번째 할 일이 삭제되었습니다.", atoi(input_param));
        }
        
        printf("\n");
        isFirst = false;
    }
    return 0;
}
