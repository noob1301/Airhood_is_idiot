#include<iostream>
#include<vector>
#include<string>

using namespace std;

class student{
public:
    vector<string> name;
    vector<int> average_score;
    void add(string a,int b){
        name.push_back(a);
        average_score.push_back(b);
    }
};
int main(){
    string re_name,re_respond_s;
    int re_score,re_respond_i;
    student* Student=new student;
    cout<<"***************************"<<endl;
    cout<<"***************************"<<endl;
    cout<<"******학생 성적 관리*******"<<endl;
    cout<<"***************************"<<endl;
    cout<<"***************************"<<endl;
    while(true){
        cout<<endl<<"할 수 있는 것:"<<endl<<"1.학생 정보 추가하기"<<endl<<"2.학생별 성적 그래프 출력하기"<<endl<<"3.학생 성적 변경 및 삭제"<<endl<<"하고 싶은 것:";
        cin>>re_respond_i;
        if(re_respond_i>3){
            cout<<endl<<"잘못된 입력입니다!"<<endl;
            continue;
        }
        if(re_respond_i==1){
            while(true){
                cout<<"학생 정보 추가를 위해 이름과 성적을 입력하세요:";
                cin>>re_name>>re_score;
                Student->add(re_name,re_score);
                cout<<"학생 정보 추가를 계속 하시겠습니까?(Yes,No):";
                cin>>re_respond_s;
                if(re_respond_s=="No")
                    break;
            }
        }
        else if(re_respond_i==2){
            if(Student->average_score[0]==0){
                cout<<"학생을 추가하고 다시 오세요!";
            }
            else{
                
            }
        }
    }
}