#include<iostream>
#include<string>
int list[200];

using namespace std;

int suffle(int a,int b,int c){
    return a*b+c;
}
int main(){
    int receive,receive3,receive4,store,store2,changetime,comparisons;
    string receive2;
    first:
    cout<<"정렬 방법에 따른 교환횟수,비교횟수 탐색기"<<endl;
    cout<<"진행할 수 있는 정렬 방법:"<<endl;
    cout<<"1.버블정렬"<<endl<<"2.선택정렬"<<endl<<"3.삽입정렬"<<endl<<"뭘 원하십니까?(숫자):";
    cin>>receive;
    if(receive>3){
        cout<<"You got wrong number"<<endl;
        goto last;
    }
    cout<<"아무숫자나:";
    cin>>receive4;
    cout<<"정렬할 원소의 갯수를 쓰세요(최대 200):";
    cin>>receive3;
    if(receive3>200){
        cout<<"Wrong answer"<<endl;
        goto last;
    }
    for(int i=0;i<receive3;i++)
        list[i]=i;
    for(int i=0;i<receive3;i++){
        store=list[suffle(i,i+receive,suffle(i,receive4+1,receive4+2))%receive3];
        list[suffle(i,i+receive,suffle(i,receive4+1,receive4+2))%receive3]=list[i];
        list[i]=store;
    }
    cout<<"섞인 배열:"<<endl;
    for(int i=0;i<receive3;i++){
        cout<<list[i]<<' ';
        if(i%10==9)
            cout<<endl;
    }
    cout<<endl<<"--------------"<<endl;
    changetime=0,comparisons=0;
    if(receive==1){
        for(int i=0;i<receive3-1;i++)
            for(int j=0;j<receive3-i-1;j++){
                if(list[j]>list[j+1]){
                    store2=list[j];
                    list[j]=list[j+1];
                    list[j+1]=store2;
                    changetime++;
                }
                comparisons++;
            }    
    }
    else if(receive==2){
        int l,index;
        for(int i=0;i<receive3;i++){
            l=receive3;
            for(int j=i;j<receive3;j++){
                comparisons++;
                if(list[j]<l)
                    l=list[j],index=j;
            }
            l=list[i];
            list[i]=list[index];
            list[index]=l;
            changetime++;
        }    
    }
    else{
        for(int i=1;i<receive3;i++){
            int j=i;
            while(j!=0&&list[j-1]>list[j]){
                comparisons++;
                store=list[j-1];
                list[j-1]=list[j];
                list[j]=store;
                j--;
            }
            changetime++;
        }
    }
    cout<<"정렬된 배열:"<<endl;
    for(int i=0;i<receive3;i++){
        cout<<list[i]<<' ';
        if(i%10==9)
            cout<<endl;
    }
    cout<<endl<<"---------------"<<endl;
    cout<<"비교 횟수:"<<comparisons<<endl<<"교체 횟수:"<<changetime<<endl;
    last:
    cout<<"Do you want again?(Yes,No):";
    cin>>receive2;
    if(receive2=="Yes")
        goto first;
    else if(receive2=="No"){
        cout<<"Ok, Good bye";
        return 0;
    }
    else{
        cout<<"You got a wrong answer"<<endl;
        goto last;
    }
}