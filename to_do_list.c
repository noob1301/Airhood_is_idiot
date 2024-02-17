#include<stdio.h>


int main(){
	int s;
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
		printf("\n");
		if (s == 1) {
			if (moving == 99) {
				printf("할 일 리스트 한계 100개를 초과하였습니다.\n할 일 삭제후 다시 해주십시오\n");
			}
			else {
				printf("추가하고 싶은 할 일을 적으십시오 : ");
				scanf("%s",s1[moving + 1]);
				printf("\n추가가 완료되었습니다.\n");
			}
		}
		else if(s == 2) {
			if (s1[0][0] == 0) {
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
			if (moving = -1;) {
				printf
			}
		}
	}
}
