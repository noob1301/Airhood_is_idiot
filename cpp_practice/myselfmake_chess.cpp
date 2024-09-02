#include<iostream>
#include<string>

using namespace std;

int main(){
    string board[8][8]={{"BR","Bk","BB","BQ","BK","BB","Bk","BR"},
    {"BP","BP","BP","BP","BP","BP","BP","BP"},
    {"[]","[]","[]","[]","[]","[]","[]","[]"},
    {"[]","[]","[]","[]","[]","[]","[]","[]"},
    {"[]","[]","[]","[]","[]","[]","[]","[]"},
    {"[]","[]","[]","[]","[]","[]","[]","[]"},
    {"WP","WP","WP","WP","WP","WP","WP","WP"},
    {"WR","Wk","WB","WQ","WK","WB","Wk","WR"}};
    int a,b,c,d;
    string e;
    while(e!="WW"&&e!="BW"){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
                cout<<board[i][j]<<' ';
            cout<<endl;
        }
        cout<<"움직임 입력:";
        cin>>a>>b>>c>>d;
        e=board[8-b][a-1];
        if(board[8-d][c-1]=="BK"||board[8-c][d]=="WK"){
            e=(board[8-d][c-1]=="WK")?"BW":"WW";
            board[8-d][c-1]=e;
            board[8-b][a-1]="[]";
        }
        else{
            board[8-d][c-1]=e;
            board[8-b][a-1]="[]";
        }
        cout<<"----------------"<<endl;
    }
    for(int i=0;i<8;i++){
            for(int j=0;j<8;j++)
                cout<<board[i][j]<<' ';
            cout<<endl;
        }
    cout<<"Winner is"<<endl<<((e=="WW")?"White":"Black");
    return 0;
}