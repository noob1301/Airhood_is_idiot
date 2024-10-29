#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
class s{
public:
    string a;
    int b,c,d;
    s(string e,int f,int g,int h){
        a=e;
        b=f,c=g,d=h;
    }
    bool operator<(const s&e)const{
        if(b==e.b)
            if(c==e.c)
                if(d==e.d) return a<e.a;
                else return d<e.d;
            else return c<e.c;
        else return b<e.b;
    }
};
int main(){
    string a;
    vector<s> b;
    int c,d,e,n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>a>>c>>d>>e;
        b.push_back(s(a,c,d,e));
    }
    sort(b.begin(),b.end());
    for(int i=0;i<b.size();i++) printf("%s\n",b[i].a.c_str());
}