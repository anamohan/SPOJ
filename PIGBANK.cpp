#include <iostream>
#include <cstdio>
#include <cstring>

#define INF 0x1fffffff

using namespace std;

int min_money[10001], coins[501], weights[501];


int main() {
	int T, E, F, N, P, W;

	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &E, &F);

		int weight_to_achieve = F - E;

		scanf("%d", &N);

		for (int i = 0; i < N; i++) {
			scanf("%d %d", &coins[i], &weights[i]);

		}
			
		min_money[0] = 0;

		for (int i = 1; i <= weight_to_achieve; i++) {
			min_money[i] = INF;
			for (int j = 0; j < N; j++) {
				if (weights[j] <= i) {
					min_money[i] = min(coins[j] + min_money[i - weights[j]], min_money[i]);
				}
			}
		}

		if (min_money[weight_to_achieve] >= INF) {
			printf("This is impossible.\n");
		} else {
			printf("The minimum amount of money in the piggy-bank is %d.\n", min_money[weight_to_achieve]);			
		}
	}
	return 0;
}