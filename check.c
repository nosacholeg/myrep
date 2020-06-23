#include <stdio.h>
#include "check.h"
int check_randomised_mas(int mas[], int max)
{
	printf("not generated nums:\n");
	for (int i = 0; i < max; i++)
	{
		if (mas[i] == 0) printf("%d  ", i + 100);
	}
	printf("\n");
	return 0;
}
