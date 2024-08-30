#include<iostream>
using namespace std;
class Add{
public:
    int a,b;
    void setvalue(int x,int y){
        a=x;
        b=y;
    }    
    int calculate(){
        return a+b;
    }    
};

class Sub{
public:
    int a,b;
    void setvalue(int x,int y){
        a=x;
        b=y;
    }
    int calculate(){
        return a-b;
    }
};

class Mul{
public:
    int a,b;
    void setvalue(int x,int y){
        a=x;
        b=y;
    }
    int calculate(){
        return a*b;
    }
};

class Div{
public:    
    int a,b;
    void setvalue(int x,int y){
        a=x;
        b=y;
    }
    int calculate(){
        return a/b;
    }
};

int main(){
    Add* a = new Add;
    Sub* b = new Sub;
    Mul* c = new Mul;
    Div* d = new Div;
    int x,y;
    char z;
    cout<<"숫자랑 기호 ex)7 4 /:";
    cin>>x>>y>>z;
    if(z=='+'){
        a->setvalue(x,y);
        cout<<a->a<<" + "<<a->b<<" = "<<a->calculate();
    }
    if(z=='-'){
        b->setvalue(x,y);
        cout<<b->a<<" - "<<b->b<<" = "<<b->calculate();
    }
    if(z=='x'){
        c->setvalue(x,y);
        cout<<c->a<<" x "<<c->b<<" = "<<c->calculate();
    }
    if(z=='/'){
        d->setvalue(x,y);
        cout<<d->a<<" / "<<d->b<<" = "<<d->calculate();
    }    
}