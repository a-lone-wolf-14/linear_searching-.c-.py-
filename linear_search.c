#include<stdio.h>

int linear_search(int x, int count, int num[])
{
    for (int j=0; j<count; j++)
    {
        if (num[j]==x)
        {
            return j;
        }
    }

    return 1;
}

int main()
{
    int count,x;
    int num[count];
    printf("Enter the number of elements in the array: ");
    scanf("%i",&count);

    for (int i=0; i<count; i++)
    {
        num[i]=i;        
    }

    printf("Enter the number to search: ");
    scanf("%i\n",&x);

    int ret=linear_search(x,count,num);

    (ret==1)?printf("Number not found"):printf("Number found at index %i",ret);

    return 0;
}