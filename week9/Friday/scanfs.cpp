//scanf_s("%19s %d", str2, sizeof(str2), &intStore);












#include<string.h>
#include<stdio.h>

//  strlen    Week 6: C style Strings, C User Input, Magic Numbers----page 25
int main(void)
{
	char str2[20] = "";
	int intStore = 0;
	// why didn&t get the user input?
	scanf_s(str2, "%d",sizeof(intStore), intStore);

	printf("string str3 value is %s and the number is %d", str2,intStore);

}
