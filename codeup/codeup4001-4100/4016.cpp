#include<iostream>
int main(){
    int a,b,c,s=1;
    scanf("%d%d%d",&a,&b,&c);
    for(int i=2;a>=i&&b>=i&&c>=i;i++){
        while(a%i==0&&b%i==0&&c%i==0){
            s*=i;
            a/=i,b/=i,c/=i;
        }
    }
    printf("%d",s);
}