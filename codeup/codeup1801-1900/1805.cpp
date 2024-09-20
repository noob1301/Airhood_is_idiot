#include<iostream>
#include<vector>
#include<algorithm>
class machine{
public:    
    int num,gas;
    machine(int a,int b){
        num=a,gas=b;
    }
    bool operator<(const machine&l)const{
        return num<l.num;
    }
};
int main(){
    int n;
    std::vector<machine> list;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int r1,r2;
        scanf("%d %d",&r1,&r2);
        list.push_back(machine(r1,r2));
    }
    std::sort(list.begin(),list.end());
    for(int i=0;i<n;i++)
        printf("%d %d\n",list[i].num,list[i].gas);
}