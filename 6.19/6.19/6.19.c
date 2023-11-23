#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROLLS 36000
#define SIDES 6

int main() {
	int dice1, dice2, sum;
	int frequency[13] = { 0 }; // �ϥί���1��12�A���ϥ�0

	srand(time(NULL)); // �ϥη�e�ɶ��@���üƺؤl

	// �������Y������l 36000 ��
	for (int i = 0; i < ROLLS; i++) {
		dice1 = 1 + rand() % SIDES; // ����1��6���ü�
		dice2 = 1 + rand() % SIDES; // ����1��6���ü�
		sum = dice1 + dice2;
		frequency[sum]++;
	}

	// �L�X���G���
	printf("%-10s%-10s%-15s\n", "Total", "Frequency", "Probability");

	for (int total = 2; total <= 12; total++) {
		double probability = (double)frequency[total] / ROLLS;
		printf("%-10d%-10d%-15.3f\n", total, frequency[total], probability);
	}

	return 0;
}