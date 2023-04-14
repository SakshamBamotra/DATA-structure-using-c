#include<stdio.h>
void main()
{
    int array[10],i,n,position,element;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the elements in the array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("\nThe array before the insertion is:\n");
    for(i=0;i<n;i++)
    {
        printf("\t%d",array[i]);
    }
    printf("\nEnter the element for insertion: ");
    scanf("%d",&element);
    printf("\nEnter the position of the element'%d': ",element);
    scanf("%d",&position);
    for(i=n;i>=position;i--)
    {
        array[i]=array[i-1];
    }
    array[i]=element;
    for(i=0;i<=n;i++)
    {
        printf("\t%d",array[i]);
    }
}
