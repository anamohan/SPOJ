#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <string>

using namespace std;


int main() {
	int t, len;
	char num[1000001];
	scanf("%d", &t);

	while (t--) {
		scanf("%s", num);
		len = strlen(num);

		// Now check for cases where all digits are 9
		bool allNines = true;
		for (int i = 0; i < len; i++) {
			if (num[i] != '9') {
				allNines = false;
				break;
			}
		}

		// if all digits are 9 then simply output 100...001
		if (allNines) {
			printf("1");
			for (int i = 1; i < len; i++) {
				printf("0");
			}
			printf("1\n");
			continue;
		} 

		int left, right, mid;
		mid = len >> 1;

		// check for length of string 
		// if odd then left = mid - 1 and right mid + 1
		// if even then left = mid - 1 and right mid
		if (len % 2) {
			left = mid - 1;
			right = mid + 1;
		} else {
			mid--;
			left = mid;
			right = mid + 1;
		}

		int flag = 0;
		for (int i = left, j = right; i >= 0 && j < len; --i, ++j) {
			if (num[i] > num[j]) {
				flag = 1;
				break;
			} else if (num[i] < num[j]) {
				break;
			}
		}

		if (flag == 0) {
			bool overflow = false;
			// increase the middle element by 1 and copy the rest from left
			while (true) {
				int res = num[mid] - '0';
				res++;
				overflow = false;

				if (res == 10) {
					overflow = true;
					num[mid] = '0';
				} else {
					num[mid] = res + '0';
				}
				if (!overflow) {
					break;
				}
				mid--;
			}
		}

		for (int i = left, j = right; i >= 0 && j < len; --i, ++j) {
			num[j] = num[i];
		}
		printf("%s\n", num);
	}
	return 0;
}