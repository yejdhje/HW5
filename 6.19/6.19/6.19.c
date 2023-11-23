#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main() {
	int dice1, dice2, sum;
	int frequency[13] = { 0 }; // 使用索引1到12，不使用0

	srand(time(NULL)); // 使用當前時間作為亂數種子

	// 模擬投擲兩顆骰子 36000 次
	for (int i = 0; i < ROLLS; i++) {
		dice1 = 1 + rand() % SIDES; // 產生1到6的亂數
		dice2 = 1 + rand() % SIDES; // 產生1到6的亂數
		sum = dice1 + dice2;
		frequency[sum]++;
	}

	// 印出結果表格
	printf("%-10s%-10s%-15s\n", "Total", "Frequency", "Probability");

	for (int total = 2; total <= 12; total++) {
		double probability = (double)frequency[total] / ROLLS;
		printf("%-10d%-10d%-15.3f\n", total, frequency[total], probability);
	}

	return 0;
}