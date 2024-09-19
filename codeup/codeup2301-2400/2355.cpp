#include<iostream>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m-1;j++)
                printf("SFPC ");
            printf("SFPC");
        }
        else{
            printf(" ");
            for(int j=0;j<m-1;j++)
                printf(" SFPC");
        }
        printf("\n");  
    }
}