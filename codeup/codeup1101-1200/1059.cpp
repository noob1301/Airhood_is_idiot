#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    if((n>49&&n<71)||n%6==0) printf("win");
    else printf("lose");
}