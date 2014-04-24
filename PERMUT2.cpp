#include <cstdio>
#include <vector>

using namespace std;

int main() {
	int n;

	while (scanf("%d", &n) == 1) {
		if (n == 0) break;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &v[i]);
		}
		bool is_ambiguous = true;
		for (int i = 0; i < n; i++) {
			int pos = v[i] - 1;
			int element = i + 1;
			if (pos > n || v[pos] != element) {
				is_ambiguous = false;
				break;
			}
		}
		if (is_ambiguous) {
			printf("ambiguous\n");
		} else {
			printf("not ambiguous\n");
		}
	}
	return 0;
}