#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m,t;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        scanf("%d",&t);
        int h=n,l=0;
        while(l<h){
            if(a[(h+l)/2]==t){
                h=(h+l)/2;
                l=h;
            }
            else if(a[(h+l)/2]>t)
                h=(h+l)/2;
            else
                l=(h+l)/2+1;
        }
        printf("%d ",(a[(h+l)/2]==t)?1:0);
    }
}