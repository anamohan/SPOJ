#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;



int main() {
	
	vector<int> primes;
	primes.push_back(2);
	for (int i = 3; i <= 32000; i++) {
		bool is_prime = true;
		int limit = (int) sqrt(i) + 1;

		for (int j = 0; j < primes.size(); j++) {
			if (primes[j] >= limit) break;
			if ((i  % primes[j]) == 0) {
				is_prime = false;
				break;
			}
		}
		if (is_prime) {
			primes.push_back(i);
		}
	}
	int t, m, n;
	scanf("%d", &t);

	while (t--) {
		scanf("%d %d", &m, &n);

		if (m < 2) m = 2;
		for (int i = m; i <= n; i++) {
			int limit = (int) sqrt(i);
			bool is_prime = true;
			for (int j = 0; primes[j] <= limit; j++) {
				if (i % primes[j] == 0) {
					is_prime = false;
					break;
				}
			}
			if (is_prime) {
				printf("%d\n", i);
			}
		}
	}
	return 0;
}