#include<iostream>
int main(){
    char l[20]={0,};
    scanf("%s",&l);
    for(int i=0;l[i]!=0;i++) printf("%c",l[i]+2);
    printf("\n");
    for(int i=0;l[i]!=0;i++) printf("%c",l[i]*7%80+48);
}