#include<iostream>
using namespace std;
int main(){
  int A,B,C;
  cin>>A>>B>>C;
  for(int i=-1000;i<1001;i++){
    for(int j=-1000;j<1001;j++){
      if(A*i+B*j==C){
        cout<<i<<' '<<j;
        return 0;
      }
    }
  }
  cout<<"Not Exist";
}
