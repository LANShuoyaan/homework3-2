#include <stdio.h>
#include <stdlib.h>

int findGCD(int a, int b);

int main() 
{
	int A, B;
	printf("emter two numbers: ");
	scanf("%d %d", &A, &B);
	int lcm = (A * B) / findGCD(A, B);
	printf("%d\n", lcm);
	return 0;
}
int findGCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

