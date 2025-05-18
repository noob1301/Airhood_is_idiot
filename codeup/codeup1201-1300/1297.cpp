#include<iostream>
using namespace std;
int main(){
  int n,b=0,m=0;
  cin>>n;
  while(true){
    b++;
    if((n-2*b)*b>(n-2*m)*m) m=b;
    else break;
  }
  cout<<m;
}
