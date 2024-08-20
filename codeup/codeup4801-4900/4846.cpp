#include<iostream>
using namespace std;
int main() {
    int N,S,P,A=0;
    cin>>N;
    for(int i=0;i<N;i++){
        cin>>S>>P;
        A+=P%S;
    }
    cout<<A;
}