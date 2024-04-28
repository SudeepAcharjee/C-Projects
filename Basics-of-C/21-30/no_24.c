// C program to print lower triangular and upper triangular matrix
#include <stdio.h>

// Function to print lower triangular matrix
void lower (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i > j)
		printf("0");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}
//Function to print upper triangular matrix
void upper (int a[3][3], int r, int c)
{
for(int i = 0; i < r; i++)
{
	for(int j = 0; j < c; j++)
	{
	if(i < j)
		printf("0");
	else
	printf("%d" , a[i][j]);
	printf(" ");
	}
	printf("\n");
}
}
int main() {
	// code
int r = 3, c = 3;
int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

printf("\nLower Triangular Matrix is :\n");
lower(a, r, c);
printf("\nUpper Triangular Matrix is :\n");
upper(a, r, c);
	return 0;
}

// This code is contributed by sudeep

