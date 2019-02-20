#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int n;
	srand(time(NULL));
	n = rand() % 100 +1;
	printf("\n\tn = %d\n",n);
}
