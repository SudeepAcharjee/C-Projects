/*  Program in C to insert the element in the sorted array  */

#include<stdio.h>
void main( )
{
     int a[20],n,item,i;
     
     printf("Enter the size of the array");
     scanf("%d",&n);
     
     printf("Enter elements of the array in the sorted order");
     for(i=0; i<n; i++)
     {
            scanf("%d", &a[i]);
     }
     
     printf("\nEnter ITEM to be inserted : ");
     scanf("%d", &item);
     
     i = n-1;
     while(item<a[i] && i>=0)
     {
           a[i+1] = a[i];
           i--;
     }
     a[i+1] = item;
     n++;
     
     printf("\n\nAfter insertion array is :\n");
     for(i=0; i<n; i++)
     {
              printf("\n%d", a[i]);
     }
     getch();
}    
