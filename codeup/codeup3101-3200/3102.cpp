#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    int n,R;
    string r;
    stack<int> l;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>r;
        if(r=="push("){
            scanf(" %d )",&R);
            l.push(R);
        }
        else if(r=="top()") printf("%d\n",(l.empty())?-1:l.top());
        else if(r=="pop()"&&!l.empty()) l.pop();
        else if(r=="size()") printf("%d\n",l.size());
        else if(r=="empty()") printf("%s\n",(l.empty())?"true":"false");
    }
}