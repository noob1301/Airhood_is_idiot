#include<iostream>
#include<stack>
int main(){
    int n,J;
    std::stack<int> S;
    scanf("%d",&n);
    int s=n;
    scanf("%d",&J);
    while(J<s){
        S.push(s%J);
        s=s/J;
    }
    S.push(s);
    while(!S.empty()){
        if(S.top()==J){
            printf("10");
        }    
        else if(S.top()<10)
            printf("%d",S.top());
        else
            printf("%c",S.top()+'A'-10);
        S.pop();
    }
}