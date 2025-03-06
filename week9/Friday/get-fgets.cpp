#include<string.h>
#include<stdio.h>
int main(void)
{
	char str2[20];
	printf("Enter a string: ");
	fgets(str2, sizeof(str2));  // Correct use of fgets() for safe input
	// what is the sytax of the fgets?????

	printf("string str3 value is %s", str2);

}
