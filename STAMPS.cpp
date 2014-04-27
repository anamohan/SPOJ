#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int T, num_stamps_needed, num_friends;;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		scanf("%d %d", &num_stamps_needed, &num_friends);
		vector<int> v(num_friends);
		for (int j = 0; j < num_friends; j++) {
			scanf("%d", &v[j]);
		}
		sort(v.begin(), v.end());

		int min_friends = 0;
		for (int j = num_friends - 1; j >= 0; j--) {
			if (v[j] >= num_stamps_needed) {
				min_friends++;
				num_stamps_needed = 0;
				break;
			} else {
				num_stamps_needed -= v[j];
				min_friends++;
			}
		}
		printf("Scenario #%d:\n", i);
		if (num_stamps_needed > 0) {
			printf("impossible\n\n");
		} else {
			printf("%d\n\n", min_friends);
		}
		cin.ignore();
	}
	return 0;
}