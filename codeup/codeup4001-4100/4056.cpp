#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n<=500)
        cout<<(int)(0.7*n);
    else if(n>500&&n<=1500)
        cout<<(int)(350+(n-500)*0.4);
    else if(n>1500&&n<=4500)
        cout<<(int)(750+(n-1500)*0.15);
    else if(n>4500&&n<=10000)
        cout<<(int)(1200+(n-4500)*0.05);
    else
        cout<<(int)(1475+(n-10000)*0.02);            
}