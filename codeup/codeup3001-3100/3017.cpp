#include<iostream>
using namespace std;
int main(){
    int n,A,B,C;
    cin>>n;
    int a[n][3];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
        a[i][2]=i+1;
    }    
    for(int i=0;i<n;i++)
        for(int j=0;j<n-i-1;j++){
            if(a[j][0]<a[j+1][0]){
                A=a[j][0],B=a[j][1],C=a[j][2];
                a[j][0]=a[j+1][0],a[j][1]=a[j+1][1],a[j][2]=a[j+1][2];
                a[j+1][0]=A,a[j+1][1]=B,a[j+1][2]=C;
            }
            else if(a[j][0]==a[j+1][0]&&a[j][1]<a[j+1][1]){
                A=a[j][0],B=a[j][1],C=a[j][2];
                a[j][0]=a[j+1][0],a[j][1]=a[j+1][1],a[j][2]=a[j+1][2];
                a[j+1][0]=A,a[j+1][1]=B,a[j+1][2]=C;
            }
        }
    for(int i=0;i<n;i++)
        cout<<a[i][2]<<' '<<a[i][0]<<' '<<a[i][1]<<endl;            
}