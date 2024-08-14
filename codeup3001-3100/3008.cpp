#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> height;
    int all_plus=0;
    for(int j, i = 0; i < 9; i++) {
        cin >> j;
        all_plus+=j;
        height.push_back(j);
        for(int a, k = height.size() - 1; k > 0; k--) {
            if(height[k] > height[k - 1])
                continue;
            a = height[k - 1];
            height[k - 1] = height[k];
            height[k] = a;    
        }
    }
    for(int i=0;i<8;i++) {
        for(int j=i+1;j<9;j++) {
            if(height[i]+height[j]==all_plus-100) {
                height[i]=0;
                height[j]=0;
                break;
            }    
        }
        if(height[i]==0)
            break;
    }
    for(int i=0;i<9;i++) {
        if(height[i] !=0) {
            cout<<height[i]<<endl;
        }
    }
    
}