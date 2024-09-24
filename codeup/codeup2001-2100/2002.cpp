#include<iostream>
int main(){
    int K;
    char L[20]={0,};
    scanf("%d%s",&K,&L);
    for(int i=0;L[i]!=0;i++){
        for(int j=3*(i+1)+K;j!=0;j--){
            L[i]--;
            if(L[i]<65)
                L[i]=90;
        }
        printf("%c",L[i]);
    }
}