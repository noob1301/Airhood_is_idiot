#include<iostream>
using namespace std;
int main(){
    int M,N;
    char A;
    cin>>N>>M>>A;
    if((N-1)%(M+1)==0)
        if(A=='A')
            cout<<'B';
        else
            cout<<'A';    
    else
        cout<<A;    
}