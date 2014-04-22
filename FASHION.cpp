#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, N, m;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &N);
		vector<int> men(N), women(N);
		for (int i = 0; i < N; i++) {
			cin>>men[i];
		}
		for (int i = 0; i < N; i++) {
			cin>>women[i];
		}
		sort(men.begin(), men.end());
		sort(women.begin(), women.end());

		int res = 0;
		for (int i = 0; i < N; i++) {
			res += men[i] * women[i];
		}
		printf("%d\n", res);
	}
	return 0;
}