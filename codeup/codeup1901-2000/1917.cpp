#include<iostream>
using namespace std;
int solution(int a,int b) {
    if(b==1)
        return a;
    return a*solution(a,b-1);    
}
int main() {
    int n,k;
    cin>>n>>k;
    if(k==0||n==1)
        cout<<1;
    else if(n==-1)
        cout<<(k%2==0)?1:-1;
    else if(n==0)
        cout<<0;    
    else
        cout<<(long long int)solution(n,k);            
}