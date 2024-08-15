#include<iostream>
using namespace std;
int main() {
    int N;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
        cin>>a[i];
    cout<<a[0]<<' '<<a[(N+1)/2-1]<<' '<<a[N-1];
}
