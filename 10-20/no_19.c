#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int factorial(int n)
{
	int i, fact = 1;
	for(i = n; i > 1; i--)
		fact = fact * i;
	return fact;
}

int rfactorial(int n)
{
	if(n == 0 || n==1)
		return 1;
	else
		return n * rfactorial(n - 1);
}

void main(int argc, char **argv)
{
	int n;
	printf("Enter a positive number: ");
	scanf("%d", &n);
	printf("\n");
	printf("Non-recursive solution: %d! = %d", n, factorial(n));
	printf("\n");
	printf("Recursive solution: %d! = %d", n, rfactorial(n));
	getch();
   
}
