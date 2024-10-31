#include<iostream>
int main(){
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g);
    printf("문제 추천:%d",(a+b*c*d*e*f*g)%6000);
}