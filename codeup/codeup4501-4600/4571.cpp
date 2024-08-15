#include<iostream>
using namespace std;
int main() {
    int M,N,L,S=0;
    cin>>M>>N;
    L=M-1;
    for(int i=1;i*i<=N;i++) {
        if(i*i>=M) {
            S+=i*i;
            if(L==M-1)
            L=i*i;
        }
    }
    if(L==M-1)
        cout<<-1;
    else
        cout<<S<<endl<<L;
}
