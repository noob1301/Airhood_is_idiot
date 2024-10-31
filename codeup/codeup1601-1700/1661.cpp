#include<iostream>
int main(){
    char a[100]={0,};
    fgets(a,100,stdin);
    for(int i=0;a[i]!=0;i++){
        if(a[i]==','){
            printf(" ");
            continue;
        }
        if(a[i]==' ') continue;
        if(a[i]==';'){
            printf("\n");
            continue;
        }
        printf("%c",a[i]);
    }
}