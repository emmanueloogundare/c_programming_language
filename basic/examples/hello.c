#include <stdio.h>

int main(void)
{
	char array[] = "Hello!\n";
	char *a, *e;

	printf("%s", array);
	a = array;
	e = &array[1];

	printf("Array, 'array' is %d bytes long and lives in %p address.\n", sizeof(array), a);
	printf("The second element of 'array' is %d bytes long and lives at %p address", sizeof(array[1]), e);
	return (0);
}
