#include <iostream>
#include <map>

using namespace std;
map<int, long long> dp;

long long solve(int n) {
	if (n == 0) return 0;
	if (dp[n] != 0) return dp[n];
	long long sum = solve(n/2) + solve(n/3) + solve(n/4);
	if (sum > n) {
		dp[n] = sum;
	} else {
		dp[n] = n;
	}
	return dp[n];
}

int main() {
	int N;
	while (scanf("%d", &N) == 1) {
		printf("%lld\n", solve(N));
	}
	return 0;
}