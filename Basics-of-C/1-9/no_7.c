#include<stdio.h>
#include<math.h>
int main()
	{
		int n;
		float x,y;
		printf("enter the value of X, n");
		scanf("%f %d",&x,&n);
		switch(n)
		{
			case 1: y = 1 + x;
				break;
		 	case 2: y = 1 + x/n;
				break;
			case 3: y = 1 + pow(x,n);
			 	break;
			default : y = 1 + x * n;
		  		break;
		}
	      printf("\n value of y(x,n) = %.2f", y);
	      return 0;
	}	      

