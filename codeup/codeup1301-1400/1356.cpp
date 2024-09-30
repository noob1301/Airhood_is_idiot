#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        if(i==0||i==n-1){
            for(int j=0;j<n;j++)
                printf("*");
            printf("\n");
            continue;
        }
        printf("*");
        for(int j=0;j<n-2;j++)
            printf(" ");
        printf("*\n");    
    }
}