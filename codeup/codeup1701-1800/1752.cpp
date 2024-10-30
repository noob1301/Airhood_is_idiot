#include<iostream>
int main(){
    char a[20]={0,};
    scanf("%s",&a);
    for(int i=19;i>=0;i--){
        if(a[i]==0) continue;
        printf("%c",a[i]);
    }
}