#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int A, D;

	while (scanf("%d %d", &A, &D) == 2) {
		if (A == 0 || D == 0) break;
		vector <int> a(A), d(D);
		for (int i = 0; i < A; i++) {
			scanf("%d", &a[i]);
		}
		for (int i = 0; i < D; i++) {
			scanf("%d", &d[i]);
		}
		sort(a.begin(), a.end());
		sort(d.begin(), d.end());
		if (a[0] < d[1]) {
			printf("Y\n");
		} else {
			printf("N\n");
		}
	}
	return 0;
}