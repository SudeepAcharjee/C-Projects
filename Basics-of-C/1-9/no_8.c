#include<stdio.h>
int main()
{
        int sales;
        float comm;
        printf("\n Sales amount?: ");
        scanf("%d", &sales);
        if(sales <= 500)
                comm = 0.05 * sales;
        else
                if(sales <= 2000)
                        comm = 35 + 0.10 * (sales - 500);
                else
                        if(sales <= 5000)
                                comm = 185 + 0,12 * (sales - 2000);
                        else
                                comm = 0.125 * sales
        printf("\n Commission Amount Rs %0.2f", comm);
        return 0;
}

