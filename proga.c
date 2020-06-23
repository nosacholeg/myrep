#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "check.h"
int main()
{
	srand(time(NULL));
	int a, mas1[900] = { 0 }, mas2[900] = { 0 };
	for (int i = 0; i < 900; i++)
	{
		mas1[i] = rand() % 900 + 100;
		a = mas1[i] - 100;
		mas2[a]++;
	}
	check_randomised_mas(mas2, 900);
}
