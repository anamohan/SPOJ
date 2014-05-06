#include <cstdio>

using namespace std;

int main() {
	int T;
	long long r;
	double s;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++) {
		scanf("%lld", &r);
		s = double(4 * r *r) + 0.25;
        printf("Case %d: %.2lf\n", i, s);
	}
	return 0;
}