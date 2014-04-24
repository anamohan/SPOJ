#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int T, N;

	scanf("%d", &T);

	while (T--) {
		cin.ignore();
		scanf("%d", &N);

		long long sum = 0, n;
		for (int i = 0; i < N; i++) {
			scanf("%lld", &n);
			sum += n;
			if (sum >= N) {
				sum %= N;
			}
		}
		if (sum == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}