#include<iostream>
int main(){
    double a,b;
    scanf("%lf %lf",&a,&b);
    while(a<=b){
        printf("%0.2f ",a);
        a+=0.01;
    }    
}