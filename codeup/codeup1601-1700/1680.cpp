#include<iostream>
int main(){
    int S,O;
    for(int i=0;i<10;i++)
        for(int j=0;j<10;j++)
            if(i*20+j*2==100+j*11){
                S=i,O=j;
                goto here;
            }    
    here:
    printf("%d%d+%d%d=1%d%d",S,O,S,O,O,O);        
}