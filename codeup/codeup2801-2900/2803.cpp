#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int x1,y1,d1,x2,y2,d2;
    cin>>x1>>y1>>d1;
    cin>>x2>>y2>>d2;
    if(sqrt(pow((x1-x2),2)+pow((y1-y2),2))>d1+d2)
        cout<<"not overlapped";
    else
        cout<<"overlapped";    
}