#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int T, num;
	scanf("%d", &T);

	while (T--) {
		scanf("%d", &num);
		int res = 0;
		while (num >= 5) {
			res += num/5;
			num = num/5;
		}
		printf("%d\n", res);
	}
	return 0;
}