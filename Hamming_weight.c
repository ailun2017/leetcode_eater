#include <stdio.h>
#include <stdlib.h>

int get_hamming_weight_01(int n)
{
	int count = 0;
	while(n > 0)
	{
		n &= (n - 1);
		count++;
	}
	return count;
}

int main(void)
{
	int count = 0;
	count = get_hamming_weight_01(0xff);
	printf("count %d\n", count);
	return 0;
}
