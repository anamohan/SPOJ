#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int N;
	while (scanf("%d", &N) == 1) {
		if (N == -1) {
			break;
		}
		vector<int> v(N);
		int sum = 0;
		for (int i = 0; i < N; i++) {
			cin>>v[i];
			sum += v[i];
		}
		if (sum % N != 0) {
			printf("-1\n");
		} else {
			int candy_in_each_packet = sum / N;
			sort(v.begin(), v.end());
			int num_of_exchanges = 0;
			for (int i = N - 1; i >= 0; i--) {
				if (v[i] > candy_in_each_packet) {
					num_of_exchanges += (v[i] - candy_in_each_packet);
					v[i] = candy_in_each_packet;
				}
			}
			printf("%d\n", num_of_exchanges);
		}
	}
	return 0;
}