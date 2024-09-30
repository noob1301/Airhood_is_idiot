#include<iostream>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n/2+1;i++){
        for(int j=0;j<(n-i*2-1)/2;j++)
            printf(" ");
        for(int j=0;j<i*2+1;j++)
            printf("*");
        printf("\n");        
    }
}