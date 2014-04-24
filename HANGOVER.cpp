#include <cstdio>

using namespace std;

int main() {
	double c;
	while (scanf("%lf", &c) == 1) {
		if (c == 0.0) break;
		double sum = 0.0;
		int count = 1;
		while (sum < c) {
			sum += (1.0) / (count + 1.0);
			count++;
		}
		printf("%d card(s)\n", count - 1);
	}
	return 0;
}