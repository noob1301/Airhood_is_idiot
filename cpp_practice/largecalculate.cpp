#include<iostream>
#include<stack>
#include<vector>
int main(){
    std::stack<char> a,b;
    char r;
    int S,R=0;
    std::vector<int> l;
    while(1){
        r=getchar();
        if(r=='\n') break;
        a.push(r);
    }
    while(1){
        r=getchar();
        if(r=='\n') break;
        b.push(r);
    }
    while(!a.empty()||!b.empty()){
        S=R;
        if(!a.empty()){
            S+=a.top()-'0';
            a.pop();
        }
        if(!b.empty()){
            S+=b.top()-'0';
            b.pop();
        }
        if(S>9){ 
            l.push_back(S-10);
            R=1;
            continue;
        }
        l.push_back(S);
        R=0;
    }
    if(R==1) l.push_back(1);
    for(int i=0;i<l.size();i++) printf("%d",l[l.size()-1-i]);
}