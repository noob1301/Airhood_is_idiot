#include<stdio.h>
#include<stdlib.h>


int main(){
	int* times = (int*)malloc(sizeof(int) * 10);
	long* number = (long*)malloc(sizeof(long) * 10);
	for(int i = 0; i < 10; i++){
		times[i] = 0;
	}
	long said_number;
	int said_full = -1;
	int k = 1;
	scanf("%ld",&said_number);
	int said_number_store = said_number;
	if (said_number <= 0) {
		printf("소인수분해불가");
		return 0;
	}
	else if(said_number == 1) {
		printf("1 소인수분해 = 1");
		return 0;
	}
	else {
		for (int i = 2; said_number != 1; i++) {
			if(said_number % i == 0) {
				said_full++;
				number[said_full] = i;
				while (1) {
					if(said_number % i != 0) {
						break;
					}
					else {
						said_number /= i;
						times[said_full]++;
					}
				}
			}
		}
	}
	printf("%d 소인수분해 = %ld^%d",said_number_store,number[0],times[0]);
	while (k <= said_full) {
		printf(" x %ld^%d",number[k],times[k]);
		k++;
	}
    return 0;

}
