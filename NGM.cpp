#include <cstdio>

using namespace std;

int main() {
	long long n;
	scanf("%lld", &n);

	if (n % 10 == 0) {
		printf("2\n");
	} else {
		printf("1\n%d\n", n % 10);
	}
	return 0;
}