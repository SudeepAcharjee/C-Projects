#include<stdio.h>
void main()
{
	int c,b,e;
	char nam[100];
	        printf("Enter your name:\n");
	        scanf("%s",nam);
	        printf("%s give ur veification\n",nam);
		printf("Enter 1 for married or 2 for unmarried \n");
		scanf("%d",&c);
		if (c ==1)
		{
			printf("Insurance done \n");
		}

	        if (c == 2)
		{
			printf("Select male or female\n enter 3 fo male and 4 for female\n");
		        scanf("%d",&b);
		}
		 if (b==3)
		 {
			 printf("enter ur age\n");
		         scanf("%d",&e);
		         if(e>=30)
				 printf("done");
			 else 
				 printf("try later");
		 }
		 else if(b ==4)
		 {
			 printf("enter ur age\n");
                         scanf("%d",&e);
                         if(e>=25)
                                 printf("done");
                         else
                                 printf("try later");
		 }
}
				
		

















