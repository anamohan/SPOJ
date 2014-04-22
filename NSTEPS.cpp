#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int T, x, y;

	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &x, &y);
		if (y != x && y != (x - 2)) {
			printf("No Number\n");
		} else {
			if (x % 2 && y % 2) {
				printf("%d\n", (x + y - 1));
			} else {
				printf("%d\n", (x + y));
			}
		}
	}
	return 0;
}