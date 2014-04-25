#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>

#define MAX 5005

using namespace std;
long long ds[MAX];

long long int solve(string s) {
  if(s.size() == 1) return 1;
  ds[0] = 1;
  int n = s.size();
  if(s[0] <= '2' && s[1] <= '6')
    ds[1] = 2;
  else if(s[0] == '1')
    ds[1] = 2;
  else
    ds[1] = 1;
  if(s[1] == '0')
    ds[1] = 1;
  for(int i = 2; i < n; ++i) {
    if(s[i] == '0')
      ds[i] = ds[i - 2];
    else if(s[i - 1] != '0' && s[i - 1] <= '2' && s[i] <= '6')
      ds[i] = ds[i - 1] + ds[i - 2];
    else if(s[i - 1] == '1')
      ds[i] = ds[i - 1] + ds[i - 2];
    else if(s[i] != '0')
      ds[i] = ds[i - 1];
  }
  
  return ds[n - 1];
}

int main() {
	string code;
	while (true) {
        getline(cin, code);
        if (code[0] == '0') break;
        memset(ds, 0, sizeof ds);
        printf("%d\n", solve(code));
    }
	return 0;
}