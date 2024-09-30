#include<iostream>
void S(int a){
    if(!a) return;
    S(a-1);
    for(int i=0;i<a;i++)
        printf("*");
    printf("\n");
}
void H(int a){
    if(!a) return;
    for(int i=0;i<a;i++)
        printf("*");
    printf("\n");
    H(a-1);
}
void s(int a){
    if(!a) return;
    S(a-1);
    for(int i=0;i<a;i++)
        printf("*");
    printf("\n");
    H(a-1);
}
int main(){
    int n;
    scanf("%d",&n);
    s(n);
}