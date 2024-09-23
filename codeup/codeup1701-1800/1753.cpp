#include<iostream>
#include<stack>
int main(){
    int n;
    std::stack<char> l;
    scanf("%d\n",&n);
    for(int i=0;i<n;i++){
        while(true){
            char r=getchar();
            if(r=='\n')
                break;
            l.push(r);    
        }
        while(!l.empty()){
            printf("%c",l.top());
            l.pop();
        }
        printf("\n");
    }
}