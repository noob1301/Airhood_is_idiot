#include<iostream>
int main(){
    int h=0,r,I;
    for(int i=0;i<9;i++){
        scanf("%d",&r);
        if(r>h){
            h=r;
            I=i+1;
        }
    }
    printf("%d\n%d",h,I);
}