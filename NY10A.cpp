#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

string patterns[] = {"TTT", "TTH", "THT", 
					 "THH",  "HTT", "HTH", 
					 "HHT", "HHH"};

int main() {
	int T, case_num;
	string input;

	scanf("%d", &T);

	while (T--) {
		scanf("%d", &case_num);
		cin>>input;
		printf("%d", case_num);
		for (int i = 0; i < 8; i++) {
			string pattern = patterns[i];
			int ans = 0;
			for (int j = 0; j < 38; j++) {
				if (input[j] == pattern[0] && input[j + 1] == pattern[1] && input[j + 2] == pattern[2]) {
					ans++;
				}
			}
			printf(" %d", ans);
		}
		printf("\n");
	}
	return 0;
}