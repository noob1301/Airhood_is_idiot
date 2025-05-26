#include<iostream>
#include<vector>
#include<string>
#include<utility>
#include<iomanip>
using namespace std;
pair<string,double> l[16]={{"?",4.4},{"A+",4.3},{"A0",4},{"A-",3.7},{"B+",3.3},{"B0",3},{"B-",2.7},{"C+",2.3},{"C0",2.0},{"C-",1.7},{"D+",1.3},{"D0",1},{"D-",0.7},{"F",0},{"Pass",4.3},{"Fail",0}};
int f(string a){
  for(int i=0;i<16;i++)
    if(l[i].first==a) return i;
}
string F(double a){
  for(int i=0;i<14;i++)
    if(l[i].second>a&&l[i+1].second<=a) return l[i+1].first;
}
vector<pair<string,string>> L;
int main(){
  int n,A,N=0;
  double S=0;
  string a,b;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>a>>b>>A;
    int o=f(b);
    if(o>6&&o!=14) L.push_back({a,b});
    S+=l[o].second*A;
    N+=A;
  }
  cout<<"Average : "<<fixed<<setprecision(2)<<S/N<<" ("<<F(S/N)<<")\n\n";
  cout<<"RETAKE NEEDED ("<<L.size()<<")\n";
  for(int i=0;i<L.size();i++){
    cout<<" "<<L[i].first<<" ("<<L[i].second<<")\n";
  }
}
