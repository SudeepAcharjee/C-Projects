#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter 3 nums");
	scanf("%d %d %d",&a,&b,&c);
	if (a>b && a>c)
	{
		printf("A is greater: %d \n",a);
	}
	else
		if(b>a && b>c)
		{ 
			printf("b is graeter: %d \n", b);
		}
		else 
			printf("c is greater :%d \n",c);
	return 0;
}
