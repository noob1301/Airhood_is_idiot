#include<iostream>
int main(){
    r:
    int a;
    scanf("%d",&a);
    if(a!=0){
        printf("%d\n",a);
        goto r;
    }
}