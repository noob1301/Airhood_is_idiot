#include<iostream>
int main(){
    float s,e,S=0;
    for(int i=0;i<5;i++){
        scanf("%f%f",&s,&e);
        if(e-s<1)
            continue;
        else
            S+=(e-s>=5)?4:e-s-1;    
    }
    if(S>=15||S<=5)
        printf("%g",(S>=15)?0.95*S*10000:1.05*S*10000);
    else
        printf("%g",S*10000);    
}