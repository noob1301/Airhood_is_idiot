#include<stdio.h>

int main(){
	int a;
	int b;
	int c;
	scanf("%d",&a);
	b = a / 3600;
	c = (a - (b * 3600)) / 60;
	printf("%d %d %d",b,c,a-(b * 3600)-(c * 60));
}
