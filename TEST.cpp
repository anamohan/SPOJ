#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 42) break;
		printf("%d\n", n);
	}
	return 0;
}