#include<stdio.h>
#include<stdlib.h>
int main() 
{
	char UPletter;
	while (1) 
	{
		printf("enter a uppercase letter : ");
		scanf(" %c",&UPletter);
		if (UPletter >= 'A'&&UPletter <= 'Z')
			printf("%c\n", UPletter + 32);
		else
			printf("this is not a uppercase letter\n");
	}
	return 0;
}