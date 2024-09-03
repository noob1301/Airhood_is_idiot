#include<iostream>
using namespace std;
int main(){
    int N,M,l,h,t;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
        cin>>A[i];
    cin>>M;
    for(int i=0;i<M;i++){
        cin>>t;
        l=0,h=N;
        while(l!=h&&h-l!=1){
            if(A[(l+h)/2]==t)
                l=(l+h)/2,h=l;
            if(A[(l+h)/2]>t)
                h=(l+h)/2;
            else
                l=(l+h)/2;        
        }
        cout<<((A[(l+h)/2]==t)?((l+h)/2)+1:-1)<<' ';
    }    
}