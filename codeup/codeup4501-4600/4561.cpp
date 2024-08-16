#include<iostream>
using namespace std;
int main() {
    int n,l=100,s=0;
    for(int i=0;i<7;i++){
        cin>>n;
        if(n%2==1){
            s+=n;
            if(n<l)
                l=n;
        }        
    }
    if(l==100)
        cout<<-1;
    else
        cout<<s<<endl<<l;    
}