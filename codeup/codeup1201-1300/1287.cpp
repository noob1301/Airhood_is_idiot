#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=1;i<10;i++) {
        for(int j=0;j<n*i;j++)
            cout<<'*';
        cout<<endl;
    }
}
