#include<iostream>
using namespace std;
int main(){
    int n,w=0,f=0,c,b,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>c>>b;
    for(int i=c-1;i<b;i++)
        w+=a[i];
    for(int i=0;i<n;i++){
        s=0;
        for(int j=i;j<n;j++){
            if(s==w)
                break;
            s+=a[j];
        }        
        if(s==w)
            f++;
    }
    cout<<f;
}