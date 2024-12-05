#include<iostream>
int main(){
	char c[100]={0,};
	fgets(c,100,stdin);
	for(int i=0;c[i]!=0;i++){
		if(c[i]==' ') continue;
		printf("%c",c[i]);
	}
}
