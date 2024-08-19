#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int b=0,n;
    char a[2000]={'c',};
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a;
        for(int i=0;a[i]!='c';i++)
            if(a[i]=='6')
                if(a[i+1]=='2')
                    b+=1;              
        cout<<b<<endl;
        b=0;
        fill(a,a+2000,'c');
    }
}