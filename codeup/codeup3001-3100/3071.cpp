#include<iostream>
#include<vector>
#include<cmath>
int main(){
    int a,b,h;
    std::vector<int> prime={2};
    scanf("%d %d",&a,&b);
    if(a==2)
        printf("2 ");
    for(int i=3;i<=b;i++){
        h=0;
        for(int j=0;j<prime.size();j++){
            if(i%prime[j]==0){
                h=1;
                break;
            }
        }
        if(h==0){
            if(sqrt(b)>i)
                prime.push_back(i);
            if(i>=a)
                printf("%d ",i);
        }
    }
}