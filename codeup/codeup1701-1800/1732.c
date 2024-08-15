#include<stdio.h>
int pow(int a,int b) {
    int c=1;
    for(int i=0;i<b;i++)
        c*=a;
    return c;    
}
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%.1f\n%d\n%d",(float)a/b,a/b,pow(a,b));
}