#include <cstdio>
#include <cmath>

using namespace std;


int main() {
	int N;
	while (scanf("%d", &N) == 1) {
		if (N == -1) break;
		if (N % 2 == 0) {
			printf("N\n");
			continue;
		}
		N--;
		if (N % 3 == 0) {
			N /= 3;
			N = N * 4 + 1;
			int t = (int) sqrt(N);
			if (t * t == N) {
				if (t % 2) {
					printf("Y\n");
				} else {
					printf("N\n");
				}
			} else {
				printf("N\n");
			}
		} else {
			printf("N\n");
		}
	}
	return 0;
}