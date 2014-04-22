#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	long long N;
	while (scanf("%lld", &N) == 1) {
		if (N == 0) break;
		printf("%lld\n",(N * (N + 1) *(2 * N + 1))/6);
	}
	return 0;
}