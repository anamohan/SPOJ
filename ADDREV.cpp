#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int reverse(int num) {
	int res = 0;
	while (num > 0) {
		res = (res * 10) + (num % 10);
		num = num / 10;
	}
	return res;
}

int main() {
	int N, m, n;
	scanf("%d", &N);

	while (N--) {
		scanf("%d %d", &m, &n);
		printf("%d\n", reverse(reverse(m) + reverse(n)));
	}

	return 0;
}