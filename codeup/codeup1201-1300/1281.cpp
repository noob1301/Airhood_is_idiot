#include<iostream>
int main(){
    int a,b,s=0;
    scanf("%d %d",&a,&b);
    for(int i=a;i<=b;i++){
        if(i==a&&i%2==1)
            printf("%d",a);
        else
            printf("%c%d",(i%2==1)?'+':'-',i);
        s+=(i%2==1)?i:-i;    
    }
    printf("=%d",s);
}