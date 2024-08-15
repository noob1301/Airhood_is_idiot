#include<stdio.h>
int main() {
    for(int i=1;i<10;i++) {
        for(int j=2;j<5;j++) {
            printf("%d x %d = %2d\t",j,i,i*j);
        }
        printf("5 x %d = %2d\n",i,5*i);
    }
}
