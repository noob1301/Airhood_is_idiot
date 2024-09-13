#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",i*n+j+1);
        printf("\n");
    }    
}