#include<iostream>
int main(){
    int n[5000000];
    for(int i=0;i<5000000;i++){
        scanf("%d",&n[i]);
        if((i+1)%50==0)
            printf("%d ",n[i]);
    }        
}