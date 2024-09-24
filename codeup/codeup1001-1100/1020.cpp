#include<iostream>
int main(){
    char a[14];
    scanf("%s",&a);
    for(int i=0;i<14;i++){
        if(a[i]=='-')
            continue;
        printf("%c",a[i]);
    }
}