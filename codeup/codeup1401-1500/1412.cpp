#include<iostream>
int main(){
    char l[90]={0,},L[26]={0,};
    fgets(l,90,stdin);
    for(int i=0;l[i]!=0;i++)
        if(l[i]>='a'&&l[i]<='z') L[l[i]-'a']++;
    for(int i=0;i<26;i++)
        printf("%c:%d\n",i+'a',L[i]);
}