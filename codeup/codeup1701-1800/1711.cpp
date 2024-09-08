#include<iostream>
int main(){
    int x1,y1,x2,y2,x3,y3;
    std::cin>>x1>>y1>>x2>>y2>>x3>>y3;
    if(x1<=x3&&x3<=x2&&y1<=y3&&y3<=y2)
        std::cout<<"충돌";
    else
        std::cout<<"비충돌";
}