#include <stdio.h>

int main(void)
{
	char c;
	short int i;
	long x;
	float f;
	double d;
	char temp[8];

	puts("Variables sizes:");
	printf("Size of char variable c = %d\n", sizeof(c));
	printf("Size of int variable i = %d\n", sizeof(i));
	printf("Size of long variable x = %d\n", sizeof(x));
	printf("Size of float variable f = %d\n", sizeof(f));
	printf("Size of double variable d = %d\n", sizeof(d));
	printf("Size of the temp array = %d\n", sizeof(temp));
	return (0);
}
