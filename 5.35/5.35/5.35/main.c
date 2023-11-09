#include <stdio.h>

void generateFibonacci(unsigned int n);

int main()
{
	unsigned int n;

	printf("��J���i�����ƦC������: ");
	scanf("%u", &n);

	generateFibonacci(n);

	return 0;
}

void generateFibonacci(unsigned int n) {
	unsigned long long int fibPrev = 0;
	unsigned long long int fibCurrent = 1;

	printf("���i�����ƦC�e %u ��:\n", n);

	for (unsigned int i = 1; i <= n; ++i) {
		printf("%llu ", fibPrev);

		unsigned long long int temp = fibCurrent;
		fibCurrent += fibPrev;
		fibPrev = temp;
	}

	printf("\n");
}
