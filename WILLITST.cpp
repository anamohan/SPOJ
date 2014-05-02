#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	long long n;
	scanf("%lld", &n);
	if ((n & (n - 1)) == 0) {
		printf("TAK\n");
	} else {
		printf("NIE\n");
	}
	return 0;
}