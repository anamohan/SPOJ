#include <iostream>
#include <cstring>
#include <cstdio>

#define MAX_LEN 100
#define END 'A'
using namespace std;

int convert_string_to_number(char *input) {
	int i = 0;
	while (i < MAX_LEN) {
		if (input[i] > 0) {
			input[i] -= '0';
		} else {
			break;
		}
		i++;
	}
	input[i] = END;
	return i;
}

void subtract(char *sum, int sum_len, char *difference, int diff_len) {
	for (int i = 0; i < diff_len; i++) {
		int diff_index = diff_len - i - 1;
		int sum_index = sum_len - i - 1;
		char digit_to_subtract = difference[diff_index];
		if (sum[sum_index] < digit_to_subtract) {
			sum[sum_index - 1] -=1;
			sum[sum_index] += 10;
		}
		sum[sum_index] -= digit_to_subtract;
	}
	for (int i = sum_len - 1; i >= 0; i--) {
		if (sum[i] < 0) {
			sum[i - 1]--;
			sum[i] += 10;
		}
	}
}

void divide_by_2(char *sum, int sum_len) {
	for (int i = 0; i < sum_len; i++) {
		sum[i + 1] += (sum[i] % 2) * 10;
		sum[i] /= 2;
	}
}

void add(char *sum, int sum_len, char *difference, int diff_len, char * diff_plus_div) {
	for (int i = 0; i < diff_len; i++) {
		diff_plus_div[sum_len - 1 - i] = sum[sum_len - i -1] + difference[diff_len - i - 1];
	}

	for (int i = diff_len; i < sum_len; i++) {
		diff_plus_div[sum_len - i - 1] = sum[sum_len - i - 1];
	}

	for (int i = sum_len - 1; i >= 0; i--) {
		diff_plus_div[i - 1] += diff_plus_div[i] / 10;
		diff_plus_div[i] %= 10;
	}
	diff_plus_div[sum_len] = END;
}

void print_number(char *input) {
	int start = 0;
	while (input[start] == 0) {
		start++;
	}
	int i = start;
	while (i < MAX_LEN) {
		if (input[i] == END) {
			break;
		}
		printf("%c", input[i] + '0');
		i++;
	}
	printf("\n");
}

int main() {
	
	char sum[MAX_LEN + 1];
	char difference[MAX_LEN + 1];
	char diff_plus_div[MAX_LEN + 1];

	memset(sum, 0, MAX_LEN + 1);
	memset(difference, 0, MAX_LEN + 1);
	memset(diff_plus_div, 0, MAX_LEN + 1);

	while (scanf("%s", sum) == 1) {
		scanf("%s", difference);
		int sum_len = convert_string_to_number(sum);
		int diff_len = convert_string_to_number(difference);
		subtract(sum, sum_len, difference, diff_len);
		divide_by_2(sum, sum_len);
		add(sum, sum_len, difference, diff_len, diff_plus_div);

		print_number(diff_plus_div);
		print_number(sum);
		memset(sum, 0, MAX_LEN + 1);
		memset(difference, 0, MAX_LEN + 1);
		memset(diff_plus_div, 0, MAX_LEN + 1);
	}


	return 0;
}