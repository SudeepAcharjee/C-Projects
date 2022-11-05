    #include <stdio.h>
    #include <stdlib.h>
    int check_prime(int);

    int main()

    {

        int num1, num2, i, j, flag, temp, count = 0;
	int n, result;
        printf("Enter the value of num1 and num2 \n");
        scanf("%d %d", &num1, &num2);
        if (num2 < 2)
        {
            printf("There are no primes upto %d\n", num2);
            exit(0);
	}
        printf("Prime numbers are \n");
        temp = num1;
        if ( num1 % 2 == 0)
        {
            num1++;
        }
        for (i = num1; i <= num2; i = i + 2)
        {
            flag = 0;
            for (j = 2; j <= i / 2; j++)
            {
                if ((i % j) == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                printf("%d\n", i);
                count++;
            }
        }
        printf("Number of primes between %d & %d = %d\n", temp, num2, count);
        printf("Enter an integer to check whether it is prime or not.\n");
        scanf("%d",&n);
        result = check_prime(n);
        if ( result == 1) 
        printf("%d is prime.\n", n);
        else
        printf("%d is not prime.\n", n);
	int check_prime(int a)
	{	
   	   int c;
           for ( c = 2 ; c <= a - 1 ; c++ )
   		{
      		   if ( a%c == 0 )
     		   return 0;
   	        }
	}
         return 1;
     }
