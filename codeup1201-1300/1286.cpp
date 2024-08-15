#include<iostream>
using namespace std;
int main() {
    int r,m=1000000,M=-1000000;
    for(int i=0;i<5;i++) {
        cin>>r;
        if(r>M)
        M=r;
        else if(r<m)
        m=r;
    }
    cout<<M<<endl<<m;
}
