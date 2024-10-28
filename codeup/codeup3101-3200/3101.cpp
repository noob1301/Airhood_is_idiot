#include<iostream>
#include<string>
#include<utility>
using namespace std;
int main(){
    int n;
    string r;
    pair<int,int> l;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>r;
        if(r=="make_pair("){
            int a,b;
            scanf(" %d, %d )",&a,&b);
            l.first=a;
            l.second=b;
        }
        else if(r=="first") printf("%d\n",l.first);
        else printf("%d\n",l.second);
    }
}