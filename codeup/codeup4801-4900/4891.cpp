#include<iostream>
using namespace std;
int main() {
    int n,h=0,l=1000,r;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>r;
        if(r>h)
            h=r;
        if(r<l)
            l=r;
    }
    cout<<h-l;
}