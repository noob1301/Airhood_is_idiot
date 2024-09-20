#include<iostream>
#include<vector>
#include<algorithm>
class num{
public:    
    int dex1,Num;
    num(int a,int b){
        dex1=a,Num=b;
    }
    bool operator<(const num&a)const{
        return Num<a.Num;
    }
};
int main(){
    int n,m;
    std::vector<num> list;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int r;
        scanf("%d",&r);
        list.push_back(num(i+1,r));
    }
    std::sort(list.begin(),list.end());
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int a,b,I=list.size()-1;
        scanf("%d%d",&a,&b);
        while(list[I].dex1<a||list[I].dex1>b) I--;
        printf("%d ",list[I].Num);
    }
}