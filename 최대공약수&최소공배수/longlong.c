#include<stdio.h>


int main(){
	long long a;
	long long b;
	scanf("%lld",&a);
	scanf("%lld",&b);
	long long c = a;
	long long d = b;
	if (a == 0 || b == 0) {
		printf("ERROR");
	}
	else if (a == 1 || b == 1) {
		printf("최대공약수 : 1, 최소공배수 : %lld", (a > b) ? a : b);
	}
	else {
		int low = (a > b) ? b : a;
		long long answer = 1;
		for(long long i = 2; i <= low; i++) {
			while (1) {
				if (a % i != 0 || b % i != 0) {
					break;
				}
				answer *= i;
				a /= i;
				b /= i;
			}
		}
		printf("최대공약수 : %lld, 최소공배수 : %lld", answer, answer * (c / answer) * (d / answer));
	}
    return 0;
}
