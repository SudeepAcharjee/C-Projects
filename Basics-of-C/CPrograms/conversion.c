#include<stdio.h>
int main()
    {
        int a=5, b=2;
        int sum;
        float c = (float)a/b;
        sum = a + b; //Implicit conversion
        printf("%f \n", c);
        printf("%d",sum);
        return 0;
    }