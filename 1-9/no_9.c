#include<stdio.h>
void main()
{
    int x;
    printf("Enter a number: \n");
    scanf("%d", &x);
    if(x>=5)
   {
	 int max = 0, min, num1, avg;
         printf("Enter the number: \n");
         scanf("%d", &num1);
         min = num1;
         int sum = num1;
         for (int i = 1; i < x; i++)
	 {
		scanf("%d", &num1);
       		while (num1 < 0)
		{
		   {
	   		printf("Enter Again number: /n");
     			scanf("%d", &num1);
		    }
		}
		if(num1 > max)
			max = num1;
		else if(num1 < min);
                       min = num1;
		       sum += num1;
	 
	 printf("The max number is : %d\n The min number is: %d\n The Average is: %d\n The sum is: %d",max, min, sum/x, sum);
        }
   }
	 else
	      {
		 printf("Invalid");
	      }
}
 
