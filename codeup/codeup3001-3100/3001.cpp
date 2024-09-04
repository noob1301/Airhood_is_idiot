#include<iostream>
using namespace std;
int main(){
    int n,a=-1,k;
    cin>>n;
    int b[n];
    for(int i=0;i<n;i++)
        cin>>b[i];
    cin>>k;
    for(int i=0;i<n;i++)
        if(b[i]==k){
            a=i+1;
            break;
        }
    cout<<a;    
}