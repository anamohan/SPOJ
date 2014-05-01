#include <iostream>
#include <cstdio>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

int main() {
	int n;
	while (scanf("%d", &n) == 1) {
		if (n == 0) break;
		vector<int> order(n);
		for (int i = 0; i < n; i++) {
			scanf("%d", &order[i]);
		}
		stack<int> lane;
		int need = 1;
		bool state = true;
		for (int i = 0; i < order.size(); i++) {
			while (!lane.empty() && lane.top() == need) {
				need++;
				lane.pop();
			}
			if (order[i] == need) {
				need++;
			} else if (!lane.empty() && lane.top() < order[i]) {
				state = false;
				break;
			} else {
				lane.push(order[i]);
			}
		}
		if (state) {
			printf("yes\n");
		} else {
			printf("no\n");
		}
	}
	return 0;
}