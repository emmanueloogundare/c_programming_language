#include <stdio.h>

int main(void)
{
	float rootbeer;
	float *pr;

	pr = &rootbeer;
	printf("The address of variable rootbeer is %p\n", pr);
	printf("The next float in memory will be at ??\n");
	return (0);
}
