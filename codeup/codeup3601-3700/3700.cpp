#include<iostream>
using namespace std;
int main(){
    int n,h=-100000;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s+=a[j];
            if(s>h)
                h=s;
        }    
    }
    cout<<h;    
}