#include<stdio.h>
void main()
{
    int array[20],n,i,j,element,count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements of the array:\n");
   for(i=0;i<n;i++)
   {
        scanf("%d",&array[i]);
   }
   printf("The array before the deletion is:\n");
   for(i=0;i<n;i++)
   {
       printf("\t%d",array[i]);
   }
    printf("\n\nEnter the element you want to delete: ");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==array[i])
        {
            count=count+1;
            printf("\nElement'%d' Found",array[i]);
            for(j=i;j<n;j++)
            {
                array[j]=array[j+1];
            }
        }
    }
    printf("\n\nThe updated array is:\n");
    for(i=0;i<n-count;i++)
            printf("\t%d",array[i]);
}
