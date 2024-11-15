#include<iostream>
#include<algorithm>
int main(){
    int l[5],s=0;
    for(int i=0;i<5;i++){
        scanf("%d",&l[i]);
        s+=l[i];
    }
    std::sort(l,l+5);
    printf("%d\n%d",s/5,l[2]);
}