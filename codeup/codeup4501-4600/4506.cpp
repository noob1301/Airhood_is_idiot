#include<iostream>
int main(){
    int a,b,s=1;
    scanf("%d%d",&a,&b);
    for(int i=2;a>=i&&b>=i;i++){
        while(a%i==0&&b%i==0){
            s*=i,a/=i,b/=i;
        }
    }
    printf("%d\n%d",s,s*a*b);
    
}