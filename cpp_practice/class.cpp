#include<iostream>
#include<string>

using namespace std;
//public, private
class Human {
public:
    string name;
    int age;
    char brawl_sujun;
    string dontknowenglish;
    Human(string name,int age, char brawl_sujun, string dontknowenglish) {
        this->name = name;
        this->age = age;
        this->brawl_sujun = brawl_sujun;
        this->dontknowenglish = dontknowenglish;
    }
};

int main() {
    int a;
    Human human1 = Human("현준",1977,'F',"Girl");
    Human human2 = Human("도현",16,'S',"Man");
    cout << "What Human want you ouput?(1~2):";
    cin >> a;
    if (a == 1) {
        cout << "name =" << human1.name << endl << "age =" << human1.age << endl << "brawl sujun =" << human1.brawl_sujun
                << endl << "성별 is" << human1.dontknowenglish;
    }
    else {
        cout << "name =" << human2.name << endl << "age =" << human2.age << endl << "brawl sujun =" << human2.brawl_sujun
                << endl << "성별 is" << human2.dontknowenglish;
    }
}