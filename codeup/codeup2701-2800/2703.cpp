#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> l;
    int a,b,u=0,d=0;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>b;
        l.push_back(b);
    }
    for(int i=0;i<a-1;i++)
        if(l[i]>l[i+1]) d++;
        else if(l[i]<l[i+1]) u++;
    cout<<u<<' '<<d;
}
