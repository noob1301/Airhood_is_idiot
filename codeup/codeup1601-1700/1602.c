#include<stdio.h>
double f(double a){
  return (a>=0)?a:-a;
}
int main(){
  double A;
  scanf("%lf",&A);
  printf("%.10g",f(A));
}
