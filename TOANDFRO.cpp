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
		for (int j = 0; j < col; j++) {
			for (int i = 0; i < row; i++) {
				int left = j;
				int right = col - j;
				if (flag) {
					pos = i * (col - 1) + left;
					cout<<input[pos];
				} else {
					pos = i * (col - 1) + right;
					cout<<input[pos];
				}
				flag = !flag;
			}	
		}
		cout<<endl;
		
	}
	return 0;
}