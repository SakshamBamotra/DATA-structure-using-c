#include<stdio.h>
void main()
{
    int array[20],i,n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
   for(i=0;i<n;i++)
   {
        scanf("%d",&array[i]);
   }
   printf("The array is:\n");
   for(i=0;i<n;i++)
   {
       printf("\n\tarray[%d]=%d",i,array[i]);
   }
}
