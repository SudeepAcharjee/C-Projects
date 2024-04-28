#include<stdio.h>
int main()
{
	int choise;
	float tf, tc;
	printf("enter 1 to choose farhenit scale");
	printf("enter 2 to choose celcius scale");
	scanf("%d", &choise);
	if (choise ==1)
	  {
		printf("enter temp is farhenit");
		scanf("%f",&tf);
		tc = (tf-32)*5/9;
		printf("celcis = % 6.2f",tc);
	  }
	 if (choise == 2)
          {
                printf("enter temp is celcius");
                scanf("%f",&tc);
                tf = (tc*5)/9+32;
                printf("farhenit = % 6.2f",tf);
           }
return 0;
}
