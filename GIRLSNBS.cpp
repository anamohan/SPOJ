#include <cstdio>

using namespace std;

int main() {
	int G, B;
	while (scanf("%d %d", &G, &B) == 2) {
		if (G == -1 || B == -1) break;
		int n = 0;
		if (G == 0 && B == 0) n = 0;
    	else if (G == B) n = 1;
	    else if (G > B)  n = ((G + B) / (B + 1));
	    else if (B > G)  n = ((G + B) / (G + 1));
	    printf("%d\n", n);
	}
	return 0;
}