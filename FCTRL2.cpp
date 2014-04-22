#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int T, num;

	scanf("%d", &T);

	while (T--) {
		scanf("%d", &num);
		int carry = 0, index = 0, res[1000] = {1};
		for (int i = 1; i <= num; i++) {
			for (int j = 0; j <= index; j++) {
				res[j] = (res[j] * i) + carry;
				carry = res[j] / 10;
				res[j] = res[j] % 10;
			} 
			while (carry) {
				res[++index] = carry % 10;
				carry = carry / 10;
			}
		}
		for (int i = index; i >= 0; i--) {
			printf("%d", res[i]);
		}
		printf("\n");
	}
	return 0;
}