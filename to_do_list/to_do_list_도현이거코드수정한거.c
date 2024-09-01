#include <stdio.h>
#include <string.h>

int main() {
    int s;
    char s1[100][50];
    int moving;
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 50; j++) {
            s1[i][j] = 0;
        }
    }
    int max_index = -1;
    printf("<메뉴>\n");
    printf("1.할 일 추가 2.할 일 조회 3.할 일 삭제 4. 종료\n");
    while (1) {
        moving = 0;
        printf("뭘 하시겠습니까?(숫자로) : ");
        scanf("%d",&s);
        getchar();
        printf("\n");
        if (s == 1) {
            if (max_index >= 99) {
                printf("할 일 리스트 한계 100개를 초과하였습니다.\n할 일 삭제후 다시 해주십시오\n");
                continue;
            }
            
            printf("추가하고 싶은 할 일을 적으십시오 : ");
            char name[10];
            scanf("%s", name);
            getchar();
            strcpy(s1[max_index + 1], name);
            max_index++;
            printf("\n추가가 완료되었습니다.\n");
            continue;
        }
        else if (s == 2) {
            if (max_index <= -1) {
                printf("할 일이 없습니다. 추가하고 다시 와주세요\n");
            }
            else {
                printf("<to_do_list>\n");
                for (int i = 0; i <= max_index; i++) {
                    printf("%d\.%s\n", i + 1, s1[i]);
                }
            }
            continue;
        }
        else if (s == 3) {
            if (max_index <= -1) {
                printf("삭제할 할 일이 없습니다.");
                continue;
            }
            
            int remove_index;
            printf("삭제할 할 일의 번호를 입력하세요: ");
            scanf("%d", &remove_index);
            getchar();
            remove_index; // 1번이면 index로 0이라서 1을 빼야함
            if (remove_index > max_index) {
                printf("존재하지 않는 할 일 입니다.");
                continue;
            }
            
            strcpy(s1[remove_index], "");
            
            // 삭제한 구멍을 뒤에거 앞으로 한칸씩 밀어서 매꾸는 거거
            for (int i = remove_index + 1; i <= max_index; i++) {
                strcpy(s1[i - 1], s1[i]);
            }
            max_index--;
            continue;
        }
        else if (s == 4) {
            check_logic:
            int check;
            printf("진짜로 종료하시겠습니까? (1/0)");
            scanf("%d", &check);
            getchar();
            if (check == 1) {
                return 0;
            }
            else if (check == 0) {
                continue;
            }
            else {
                printf("올바르지 않은 입력입니다.\n다시 입력해주세요.\n");
                goto check_logic;
            }
        }
    }
}
