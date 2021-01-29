#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
double my_pow(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
		return n * my_pow(n, k - 1);
	else
		return 1.0 / my_pow(n, -k);
}
int main(int argc, char *argv[]) 
{
	printf("%lf", my_pow(2, -3));
	return 0;
}
