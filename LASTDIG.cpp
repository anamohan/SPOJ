#include <iostream>
#include <cstdio>


using namespace std;

int main() {
	int t, a, last_digit, last_digit_hold;
	long b;
	scanf ("%d", &t);

	while (t--) {
		scanf("%d %ld", &a, &b);
		last_digit = a % 10;

		if (b == 0) {
			printf("1\n");
			continue;
		} else if (b == 1) {
			printf("%d\n", last_digit);
			continue;
		}

		int j = 2;
		while (b > 1) {
			last_digit_hold = last_digit;

			if (last_digit == 0 || last_digit == 1) {
				break;
			} else {
				if (b % j == 0) {
					b /= j;
					while (j > 1) {
						last_digit *= last_digit_hold;
						last_digit %= 10;
						j--;
					}
					j = 2;
				} else {
					j++;
				}
			}
		}
		printf("%d\n", last_digit);

		
	}
	return 0;
}