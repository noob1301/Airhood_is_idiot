#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int n,r;
    std::vector<int> l;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&r);
        l.push_back(r);
    }
    std::sort(l.begin(),l.end());
    for(int i=0;i<l.size();i++) printf("%d\n",l[i]);
}