#include<iostream>
using namespace std;
int main() {
    int N;
    int s=0;
    cin>>N;
    for(int i=0;i<N;i++) {
       int b;
       cin>>b;
       s+=b;
    }
    cout<<s;
}
