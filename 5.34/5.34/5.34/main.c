#include <stdio.h>
#include<math.h>


int main() 
{
	int A, B;
	printf("enter two numbers : ");
	scanf(" %d %d",&A,&B);
	int result = pow(A, B);
	printf("power(a, b) = %d\n", result);

	return 0;
}

