#include<stdio.h>
int main()
    {
        int a;
        char b[15];
        float c;
        double d;

        printf ("Enter Your Roll number \n"); //Integer
        scanf ("%d", &a);

        printf ("Enter your name \n");
        scanf("%s", &b); //When using char remember it takes %c as a single letter if need more letter than use array and %s for that.

        printf ("Enter your CGPA ");
        scanf ("%f", &c);

        double myDoubleNum = 19.99;  // Double (floating point number)
  
        printf("%lf \n", myDoubleNum);
        printf("your roll number: %d \n", a);
        printf("Your name: %s \n", b);
        printf("your cgpa is: %f", c);
        return 0;
    }