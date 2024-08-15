#include<iostream>
using namespace std;
int main() {
    int k;
    cin>>k;
    for(int i=1;i<7;i++) {
        if (k-i>6 || k-i<1)
            continue;
        cout<<i<<' '<<k-i<<endl;
    }
}
