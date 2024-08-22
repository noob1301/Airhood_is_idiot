#include<iostream>
using namespace std;
int main(){
    int a[7],b=0;
    for(int i=0;i<7;i++){
        cin>>a[i];
        if(a[i]%2==1)
            b+=a[i];
    }
    if(b==0)
        cout<<-1;
    else
        cout<<b;        
}