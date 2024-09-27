#include<iostream>
void s(int a){
    if(a==0)
        return;
    s(a/2);    
    printf("%d",(a%2==1)?1:0);
}
int main(){
    int n;
    scanf("%d",&n);
    printf("2 ");
    s(n);
    printf("\n8 %o\n16 %X",n,n);
}