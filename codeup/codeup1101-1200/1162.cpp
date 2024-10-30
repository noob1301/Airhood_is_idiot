#include<iostream>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%s",((a-b+c)%10==0)?"대박":"그럭저럭");
}