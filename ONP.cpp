#include <cstdio>
#include <stack>
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
	map<char, int> priority;
	priority['+'] = 1;
	priority['-'] = 2;
	priority['*'] = 3;
	priority['/'] = 4;
	priority['^'] = 5;
	priority['('] = 0;
	priority[')'] = 0;

	int t;
	scanf("%d", &t);

	while (t--) {
		string expr;
		cin>>expr;
		stack<char> s;
		for (int i = 0; i < expr.length(); i++) {
			if (priority.count(expr[i]) <= 0) {
				cout<<expr[i];
				continue;
			}
			else if (expr[i] == '(') {
				s.push(expr[i]);
				continue;
			}
			else if (expr[i] == ')') {
				while (!s.empty() && s.top() != '(') {
					cout<<s.top();
					s.pop();
				}
				s.pop();
				continue;
			} else if (priority[expr[i]] > priority[s.top()]) {
				s.push(expr[i]);
				continue;
			} else if (priority[expr[i]] <= priority[s.top()]) {
				while (!s.empty() && priority[expr[i]] <= priority[s.top()]) {
					cout<<s.top();
					s.pop();
				}
				s.push(expr[i]);
				continue;
			}
		}
		while (!s.empty()) {
			cout<<s.top();
			s.pop();
		}
		cout<<endl;
	}
	return 0;
}