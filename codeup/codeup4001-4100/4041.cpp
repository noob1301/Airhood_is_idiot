#include<iostream>
#include<vector>
int main(){
    std::vector<char> l;
    char n;
    while(scanf("%c",&n)!=EOF)
        l.push_back(n);
    int j=0,s=0;
    for(int i=l.size()-1;i>-1;i--){
        if(l[i]=='0'&&j==0)
            continue;
        j=1;
        s+=l[i]-'0';
        printf("%d",l[i]-'0');
    }
    printf("\n%d",s);
}