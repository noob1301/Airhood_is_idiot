#include<iostream>
#include<vector>
#include<utility>
using namespace std;
bool s(int a,vector<pair<int,int>> l){
    for(int i=0;i<l.size();i++){
        if(l[i].first==a-1) return true;
    }
    return false;
}
int main(){
    int M,N,K,x,a,b,r,S=0;
    vector<int> list;
    vector<int> s_list;
    vector<pair<int,int>> c_list;
    scanf("%d",&M);
    for(int i=0;i<M;i++){
        scanf("%d",&r);
        list.push_back(r);
        S+=r;
        s_list.push_back(S);
    }
    scanf("%d%d",&N,&K);
    for(int i=0;i<N+K;i++){
        scanf("%d%d%d",&x,&a,&b);
        if(x==0){
            if(s(a,c_list)){
                for(int j=0;j<c_list.size();j++){
                    if(c_list[j].first==a-1){
                        c_list[j].second=b-list[a-1];
                        break;
                    }
                }
            }
            else c_list.push_back({a-1,b-list[a-1]});
        }
        else{
            int pms=0;
            for(int j=0;j<c_list.size();j++){
                if(c_list[j].first>=a-1&&c_list[j].first<=b-1) pms+=c_list[j].second;
            }
            if(a==1) printf("%d\n",s_list[b-1]+pms);
            else printf("%d\n",s_list[b-1]-s_list[a-2]+pms);
        }
    }
}