#include<iostream>
#include<vector>
int main(){
    char r;
    int s=0;
    std::vector<char> l;
    while(true){
        r=getchar();
        if(r==EOF) break;
        l.push_back(r);
        s+=r-'0';
    }
    printf("%d",(s%3==0)?1:0);
}