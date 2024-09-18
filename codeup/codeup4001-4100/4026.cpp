#include<iostream>
#include<vector>
#include<algorithm>

int main() {
	int a[5];
	for (int i = 0; i < 5; i++)
		scanf_s("%d", &a[i]);
	std::sort(a, a + 5);
	printf("%d", a[2]);
}
