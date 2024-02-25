#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	printf("변환하고 싶은 초 = ");
	scanf("%d",&a);
	printf("\n");
	b = a / 3600;
	c = (a - (b * 3600)) / 60;
	printf("%d초 환산 결과 = %d시간 %d분 %d초", a, b , c , a -(b * 3600) - (c * 60));
	return 0;

}
