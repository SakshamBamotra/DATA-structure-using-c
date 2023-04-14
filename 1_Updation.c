#include<stdio.h>
void main()
{
    int array[20],i,n,position,element;
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
       printf("\tarray[%d]=%d",i,array[i]);
   }
   printf("\nEnter the index at which you want updation: ");
   scanf("%d",&position);

   if(position<n)
   {
       printf("Enter the element at '%d'position: ",position);
       scanf("%d",&element);
       array[position]=element;
       printf("\n");
       for(i=0;i<n;i++)
        printf("\tarray[%d]=%d",i,array[i]);
   }
   else
    printf("position not found");
}

