#include <cstdio>

using namespace std;


int main() {
	int T, N, start;

	scanf("%d", &T);

	while (T--) {
		scanf("%d %d", &N, &start);

		if (start == 0) {
			printf("Airborne wins.\n");
		} else {
			printf("Pagfloyd wins.\n");
		}
	}
	return 0;
}