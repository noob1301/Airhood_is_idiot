#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    string N[n];
    for(int i=0;i<n;i++)
        cin>>N[i];
    sort(N,N+n);
    for(int i=0;i<n;i++)
        printf("%s\n",N[i].c_str());   
}