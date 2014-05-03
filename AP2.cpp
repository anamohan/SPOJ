#include <cstdio>

using namespace std;

int main() {
	int t;
	scanf("%d",&t);
	while (t--) {
	  long long  a, b, c, i, j;
	  scanf("%lld %lld %lld", &a, &b, &c);
	  long long  n = (c * 2) / (a + b);
	  long long  d = (b - a) / (n - 5);
	  long long  m = a - (2 * d);
	  printf("%lld\n", n);
	  for (i = m, j = 0; j < n; i += d, j++){
	   	printf("%lld ",i);
	  }
	}
	printf("\n");
	return 0;
}