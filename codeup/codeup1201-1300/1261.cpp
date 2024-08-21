#include<iostream>
using namespace std;
int main(){
    int a[10];
    bool b=true;
    for(int i=0;i<10;i++){
        cin>>a[i];
        if(a[i]%5==0){
            cout<<a[i];
            b=false;
            break;
        }
    }
    if(b==1)
        cout<<0;    
}