#include<iostream>
int main(){
    for(int i=1;i<10;i++){
        for(int j=0;j<10;j++){
            for(int h=0;h<10;h++){
                if(90*i+9*j+h==11*h) printf("%d%d%d-%d%d=%d%d\n",i,j,h,i,j,h,h);
            }
        }
    }
}