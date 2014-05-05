#include <iostream>
#include <cstdio>

using namespace std;

int last_digit(int a, long long b) {
	if (!b) return 1;
    if (b % 2) return (a * last_digit(a, b - 1)) % 10;
    else {
        int aux = last_digit(a, b / 2);
        return (aux * aux) % 10;
    }
}

int main() {
	int T;
	string a;
	long long b;

	scanf("%d", &T);

	while (T--) {
		cin>>a>>b;
		if (a == "0" && !b) {
            printf("0\n");
            continue;
        }
        cout << last_digit(a[(int)(a).size() - 1] - '0', b) << endl;
	}
	return 0;
}