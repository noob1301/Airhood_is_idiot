#include<iostream>
int main() {
    char l[6]= {0,};
    scanf("0.%s",&l);
    int s=0,J=0,m=1;
    for(int i=0; l[i]!=0; i++) {
        s=s*10+l[i]-'0';
        J++;
    }
    for(int i=0; i<J; i++) m*=10;
    while(s%2==0&&m%2==0) s/=2,m/=2;
    while(s%5==0&&m%5==0) s/=5,m/=5;
    printf("%d %d",s,m);
}