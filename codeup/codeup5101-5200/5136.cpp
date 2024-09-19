#include<iostream>
int h,x,y,z;
int main(){
    scanf("%d %d %d",&x,&y,&z);
    if(x>=y&&x>=z)
        h=x;
    else if(y>=x&&y>=z)
        h=y;
    else
        h=z;
    h=3*h-x-y-z;
    if(h%2==0)
        printf("%d",h/2);
    else
        printf("%d",2+h/2);    
}