#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    printf("%s",(n%400==0||(n%4==0&&n%100!=0))?"Leap":"Normal");
}