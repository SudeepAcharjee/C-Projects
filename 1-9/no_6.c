#include<stdio.h>
int main()
{
	int n, a;
	printf("Enter the number of Array");
	scanf("%d",&n);
	for (a = 1; a <= n; a++)
	{
		if (a % 2 == 1)
		{
			printf("odd numbers = %d\n",a);
		}
		else
			printf("even numbers = %d\n", a);
	}
return 0;
}


