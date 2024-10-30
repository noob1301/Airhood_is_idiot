#include<iostream>
int main(){
    long long int s=0,r;
    for(int i=0;i<3;i++){
        scanf("%d",&r);
        s+=r;
    }
    printf("%lld\n%.1f",s,s/(3*1.0));
}