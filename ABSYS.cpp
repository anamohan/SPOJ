#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <cstdio>
#include <sstream>

using namespace std;

string add(string num1, string num2) {
	int a = atoi(num1.c_str());
	int b = atoi(num2.c_str());
	int c = a + b;
	ostringstream convert;   
	convert << c;
	return convert.str();
}

string subtract(string num1, string num2) {
	int a = atoi(num1.c_str());
	int b = atoi(num2.c_str());
	int c = a - b;
	ostringstream convert;   
	convert << c;
	return convert.str();
}
int main() {
	string pttrn = "machula";
	string num1, plus, num2, equals, num3;
	int T;
	scanf("%d", &T);

	while (T--) {
		cin>>num1>>plus>>num2>>equals>>num3;
		if (num1.find(pttrn) != string::npos){
			num1 = subtract(num3, num2);
		} else if (num2.find(pttrn) != string::npos) {
			num2 = subtract(num3, num1);
		} else if (plus.find(pttrn) != string::npos) {
			plus = "+";
		} else if (equals.find(pttrn) != string::npos) {
			equals = "=";
		} else if (num3.find(pttrn) != string::npos) {
			num3 = add(num1, num2);
		}
		cout<<num1<<" "<<plus<<" "<<num2<<" "<<equals<<" "<<num3<<endl;
	}
	return 0;
 }