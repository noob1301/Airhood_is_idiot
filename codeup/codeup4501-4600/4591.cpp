#include<iostream>
using namespace std;
int main(){
    int r,n,h=0;
    for(int i=0;i<9;i++){
        cin>>r;
        if(r>h){
            h=r;
            n=i+1;
        }    
    }
    cout<<h<<endl<<n;
}