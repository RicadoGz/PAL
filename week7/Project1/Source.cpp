#include<stdio.h>
int main()
{
	int n = 5;

	while (n < 0)//false 
	{
		printf("n while value is %d", n);
		n--;
	}


	do
	{
		printf("n do while value is %d\n", n);
		n--;

	} while (n > 0);
	
}