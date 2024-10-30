#include<iostream>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%s+%s=%s",(a%2==0)?"짝수":"홀수",(b%2==0)?"짝수":"홀수",((a+b)%2==0)?"짝수":"홀수");
}