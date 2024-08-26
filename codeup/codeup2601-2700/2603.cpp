#include<iostream>
using namespace std;
int main(){
    int n[10];
    for(int i=0;i<10;i++)
        cin>>n[i];
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++)
            if(n[j]>=100-i*10)
                cout<<"# ";
            else
                cout<<"  ";
        cout<<endl;
    }               
}