#include<iostream>
using namespace std;
int main() {
    char a[20]={0,};
    cin>>a;
    for(int i=0;a[i]!=0;i++)
        cout<<"+-";
    cout<<'+'<<endl;
    for(int i=0;a[i]!=0;i++)
        cout<<'|'<<a[i];
    cout<<'|'<<endl;
    for(int i=0;a[i]!=0;i++)
        cout<<"+-";
    cout<<'+';
}