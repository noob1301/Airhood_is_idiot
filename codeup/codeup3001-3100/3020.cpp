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
    int n,m,h,l,I;
    scanf("%d",&n);
    std::vector<num> list;
    for(int i=0;i<n;i++){
        int r;
        scanf("%d",&r);
        list.push_back(num(i+1,r));
    }
    std::sort(list.begin(),list.end());
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        int r;
        l=0,h=list.size(),I=-1;
        scanf("%d",&r);
        while(l<h){
            if(list[(l+h)/2].Num==r){
                I=(l+h)/2;
                break;
            }
            if(list[(l+h)/2].Num>r)
                h=(l+h)/2;
            else
                l=(l+h)/2+1;    
        }
        printf("%d ",(I!=-1)?list[I].dex1:-1);
    }
}