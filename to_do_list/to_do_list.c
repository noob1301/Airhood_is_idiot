#include<stdio.h>
#include<string.h>


int main(){
	int s;
	char c;
	char s1[100][50];
	int moving = -1;
	for (int i = 0; i < 100; i++){
		for (int j = 0; j < 50; j++) {
			s1[i][j] = 0;
		}
	}
	printf("<메뉴>\n");
	printf("1.할 일 추가 2.할 일 조회 3.할 일 삭제\n");
	while (1) {
		printf("뭘 하시겠습니까?(숫자로) : ");
		scanf("%d",&s);
		getchar();
		printf("\n");
		if (s == 1) {
			if (moving == 99) {
				printf("할 일 리스트 한계 100개를 초과하였습니다.\n할 일 삭제후 다시 해주십시오\n");
			}
			else {
				printf("추가하고 싶은 할 일을 적으십시오 : ");
				scanf("%s",s1[moving + 1]);
				getchar();
				moving++;
				printf("\n추가가 완료되었습니다.\n");
			}
		}
		else if(s == 2) {
			if (moving < 0) {
				printf("할 일이 없습니다. 추가하고 다시 와주세요\n");
			}
			else {
				printf("<to_do_list>\n");
				for (int i = 0; i <= moving; i++) {
					printf("%d.%s\n",i + 1, s1[i]);
				}
			}
		}
		else if(s == 3) {
			if (moving == -1) {
				printf("현재 할 일이 없습니다. 추가하고 다시 오세요.\n");
			}
			else {
				printf("<to_do_list>\n");
				for (int i = 0; i<= moving; i++) {
					printf("%d.%s\n",i + 1, s1[i]);
				}
				printf("어떤 할 일을 없앨까요?(숫자로) : ");
				int s2;
				scanf("%d",&s2);
				getchar();
				printf("\n");
				for (int i = s2 - 1; i < moving; i++){
					strcpy(s1[i],s1[i + 1]);
				}
				moving--;
				printf("삭제 성공하였습니다.\n");
			}
		}
		dpgb:
		printf("프로그램을 종료하시겠습니까? y/n : ");
		char ch[10];
		scanf("%s", ch);
		getchar();
		printf("\n");
		if (strcmp(ch, "n") == 0) {
			continue;
		}
		else if(strcmp(ch, "y") == 0) {
			break;
		}
		else {
			goto dpgb;
		}
	}
	printf("Airhood is idiot");
}
