#include<iostream>
#include<vector>
int main(){
    int a,b,c,s,S;
    std::vector<int> l={0,0,0,0,0,0,0,0,0,0};
    scanf("%d%d%d",&a,&b,&c);
    s=a*b*c;
    while(s!=0){
        S=s/10;
        l[s-(S*10)]++;
        s/=10;
    }
    for(int i=0;i<10;i++) printf("%d\n",l[i]);
}