#include<iostream>
using namespace std;
int main(){
    int N,S=0,r;
    cin>>N;
    for(int i=1;i<=N;i++)
        S+=i;
    for(int i=0;i<N-1;i++){
        cin>>r;
        S-=r;
    }
    cout<<S;
}