#include<iostream>
int main(){
    int y,m,d;
    scanf("%d%d%d",&y,&m,&d);
    printf("%s",((y+m+d)/100%2==0)?"대박":"그럭저럭");
}