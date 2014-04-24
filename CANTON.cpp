#include <cstdio>

using namespace std;

int main() {
	int t;
    scanf("%d",&t);
    while(t--) {
        int i = 1, num, sum = 0;
        scanf("%d", &num);
        while (sum < num) {
        	sum += i;
        	i++;
        }
        i--;
        int temp = num -(sum - i);
        int total = i + 1;
        if (i % 2 == 0)
            printf("TERM %d IS %d/%d\n", num, temp, total - temp);
        else
            printf("TERM %d IS %d/%d\n", num, total - temp, temp);
    }
	return 0;
}