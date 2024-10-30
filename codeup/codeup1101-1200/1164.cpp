#include<iostream>
int main(){
    int n;
    for(int i=0;i<3;i++){
        scanf("%d",&n);
        if(n<171){
            printf("CRASH");
            return 0;
        }
    }
    printf("PASS");
}