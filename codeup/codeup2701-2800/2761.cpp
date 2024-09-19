#include<iostream>
#include<algorithm>
int main(){
    int a,b,A[3];
    scanf("%d %d",&a,&b);
    A[0]=a+b,A[1]=a-b,A[2]=a*b;
    std::sort(A,A+3);
    printf("%d",A[1]);
}