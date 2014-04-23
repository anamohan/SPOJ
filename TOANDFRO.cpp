#include <iostream>
#include <cstdio>
#include <string>


using namespace std;

int main() {
	int col, pos;
	string input;
	while (scanf("%d", &col) == 1) {
		if (col == 0) break;
		cin>>input;
		int row = input.length() / col;
		bool flag = true;
		for (int i = 0; i < col; i++) {
			flag = true;
			for (int j = 0; j < row; j++) {
				int pos = (flag) ? ((col * j) + i) : ((col * (j + 1)) - i - 1);
				printf("%c", input[pos]);
				// printf("%d ", pos);
				flag = !flag;
			}
			// printf("\n");
		}
		printf("\n");
	}
	return 0;
}