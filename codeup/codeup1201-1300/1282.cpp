#include<iostream>
using namespace std;
int main() {
	int n;
	int k;
	cin>>n;
	for(int i=0;i*i<=n;i++)
		k=i;
	cout<<n-k*k<<' '<<k;
}