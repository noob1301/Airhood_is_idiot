#include<iostream>
int main(){
    float a,s=0;
    int b;
    for(int i=0;i<3;i++){
        scanf("%f %d",&a,&b);
        s+=a*b/1.0;
    }
    printf("%0.1f",s);
}