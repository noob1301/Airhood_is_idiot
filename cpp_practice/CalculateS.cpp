#include<iostream>
int main(){
    int l[100][100]={0,},x1,y1,x2,y2,s=0;
    for(int i=0;i<4;i++){
        scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
        for(int j=x1;j<x2;j++)
            for(int k=y1;k<y2;k++)
                l[j][k]=1;
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++) printf("%d",l[i][j]);
        printf("\n");
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(l[i][j]==1) s++;
        }
    }
    printf("%d",s);
}
