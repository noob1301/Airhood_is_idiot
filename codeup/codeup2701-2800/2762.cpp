#include<iostream>
using namespace std;
int main() {
    char a[100];
    int b[50],c=0;
    cin>>a;
    for(int i=0;i<100;i++)
        if(a[i]==',') {
            b[c]=i;
            c++;
        }
    cout<<a[0];
    for(int i=0;i<=c-1;i++)
        cout<<a[b[i]+1];
}