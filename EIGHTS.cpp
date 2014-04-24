#include <cstdio>

using namespace std;

int main() {
	int t;
	long long k;

	scanf("%d", &t);

	while (t--) {
		scanf("%lld", &k);
		long long res = 192 + (k - 1) * 250;
		printf("%lld\n", res);
	}
	return 0;
}