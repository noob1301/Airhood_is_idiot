#include<iostream>
using namespace std;
int main(){
    int N,K,H=-100*100000;
    cin>>N>>K;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    int r;
    for(int i=0;i<=N-K;i++){
        r=0;
        for(int j=0;j<K;j++)
            r+=a[i+j];
        if(r>H)
            H=r;    
    }
    cout<<H;            
}