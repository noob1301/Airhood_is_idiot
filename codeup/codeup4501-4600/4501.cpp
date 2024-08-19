#include<iostream>
using namespace std;
int main() {
    int n,o=0,t=0;
    for(int i=0;i<7;i++) {
        cin>>n;
        if(n>o){
            t=o;
            o=n;
            continue;
        }
        if(n>t)
            t=n;
    }
    cout<<o<<endl<<t;
}