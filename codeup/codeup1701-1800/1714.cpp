#include<iostream>
#include<stack>
int main(){
    std::stack<int> l;
    while(true){
        char r=getchar();
        if(isdigit(r))
            l.push(r);
        else
            break;    
    }
    while(!l.empty()){
        printf("%d",l.top()-48);
        l.pop();
    }    
}