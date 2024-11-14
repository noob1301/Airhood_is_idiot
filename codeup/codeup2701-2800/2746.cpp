#include<iostream>
#include<cmath>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    printf("%s",(pow(n,6)<m)?"Safe":"Dangerous");
}