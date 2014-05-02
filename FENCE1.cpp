#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int L;
	double area;
	while (scanf("%d", &L) == 1) {
		if (L == 0) break;
		area = (L * L) / (2 * M_PI);
		printf("%.2lf\n",area);
	}
	return 0;
}