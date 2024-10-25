#include<iostream>
int main(){
    char a[101]={0,};
    int s=0,S=0;
    scanf("%s",&a);
    for(int i=0;a[i]!=0;i++)
        if(a[i]=='c'||a[i]=='C')
            if(a[i+1]=='c'||a[i+1]=='C') s++,S++;
            else s++;
    std::cout<<s<<'\n'<<S;        
}