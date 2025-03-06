#include<string.h>
#include<stdio.h>
//strlen(str2) use the strlen toprintf the value









int main(void)
{
	int const countOfChar = 20;
	char str2[countOfChar]="hello world!!!";
	// we need get how much valid element in the char array 
	// how should we do that?
	for (int i = 0; i < countOfChar; i++)
	{
		
		printf("the index is %d, the value is %c\n", i, str2[i]);
	}

}
