#include<iostream>
int main(){
    char l[1000]={0,};
    scanf("%s",&l);
    for(int i=0;l[i]!=0;i++){
        if((l[i]>='A'&&l[i]<='Z')||(l[i]>='a'&&l[i]<='z')) printf("%c",(l[i]>='a')?l[i]-32:l[i]+32);
        else printf("%c",l[i]);
    }
}