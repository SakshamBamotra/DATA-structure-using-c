#include<stdio.h>
void main()
{
    int a[50],size,i,num;
    printf("Enter the size of the array");
    scanf("%d",&size);
    printf("\nEnter the array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number you want to search: ");
    scanf("%d",&num);
    for(i=0;i<size;i++)
    {
        if(a[i]==num)
        {
            printf("%d element found at %dposition",num,i+1);
        }
    }
}
