#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	int n, ans = 0;
    scanf("%d",&n);
    for(int i = 1;i <= ((int)sqrt(n)); i++)
        ans += (n/i -i + 1);
    printf("%d",ans);
    return 0;
}