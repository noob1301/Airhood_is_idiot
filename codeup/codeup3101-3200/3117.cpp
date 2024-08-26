#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int K,n;
    cin>>K;
    for(int i=0;i<K;i++){
        cin>>n;
        if(n==0)
            v.pop_back();
        else
            v.push_back(n);
    }
    int a=0;
    for(int i=0;i<v.size();i++)
        a+=v[i];
    cout<<a;    
}