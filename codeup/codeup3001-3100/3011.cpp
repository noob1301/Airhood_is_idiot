#include<iostream>
using namespace std;
int main(){
    int n,an=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++){
        bool c=false;
        for(int j=0;j<n-i-1;j++)
            if(a[j]>a[j+1]){
                c=true;
                int b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        if(c==false)
            break;
        else
            an++;
    }
    cout<<an;        
}