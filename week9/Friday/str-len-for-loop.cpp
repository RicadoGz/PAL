#include<string.h>
#include<stdio.h>
//strlen(str2) use the strlen to printf the value
// fgets 	//Week 6: C style Strings, C User Input, Magic Numbers----page 20
//  strlen    Week 6: C style Strings, C User Input, Magic Numbers----page 26
















int main(void)
{

	int const countOfChar = 20;
	char str2[countOfChar];

	printf("Enter a string: ");
	//Syntax: fgets(buffer, size, stdin);
	fgets(str2, sizeof(str2),stdin);  // Correct use of fgets() for safe input
		// what is the sytax of the fgets?????

	// the result we want print each element inside of the string

	// we need get how much valid element in the char array 
	// how should we do that?

	//20 time is whole lenth about the char array 
	// but we want print only elemen instde the char array
	for (int i = 0; i < strlen(str2); i++)
	{
		
		printf("the index is %d, the value is %c\n", i, str2[i]);
	}

}
