#include <cstdio>

using namespace std;

long long combination(int n, int k) {
	if (k > n - k) {
		k = n - k;
	}
	long long res = 1;
	for (int i = 0; i < k; i++) {
		res = res * (n - i) / (i + 1);
	}
	return res;
}

int main() {
	int T, n, k;

	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &n, &k);
		printf("%lld\n", combination(n - 1, k - 1));
	}
	return 0;
}