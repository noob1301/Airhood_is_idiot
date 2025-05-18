#include<iostream>
#include<string>
using namespace std;
int main(){
   string a,b,c;
   cin>>a>>b>>c;
   if(a[a.size()-1]==b[0]&&b[b.size()-1]==c[0]&&c[c.size()-1]==a[0]) cout<<"good";
   else cout<<"bad";
}
