// Linear and Binary Search
#include<stdio.h>
void linear();
void binary();

int main()
{
    linear();
    binary();
    return(0);
}

void linear()
{
    int i, n, key, flag, a[100];
    flag=0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the elements:");
        scanf("%d", &a[i]);
    }
    printf("Enter the key\n");
    scanf("%d", &key);
    for(i=0; i<n; i++)
    {
        if(key==a[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Key is found in %dth position\n", i+1);
    }
    else 
    {
        printf("Key not found\n");
    }
}

void binary()
{
    int i, n, low, mid, high, key, flag, a[100];
    flag=0;
    low=0;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    high=n-1;
    for(i=0; i<n; i++)
    {
        printf("Enter the elements:");
        scanf("%d", &a[i]);
    }
    printf("Enter the key\n");
    scanf("%d", &key);
    while(low<=high)
    {
        mid=(low+high)/2;
        if(key==a[mid])
        {
            flag=1;
            break;
        }
        else if(key<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
    }
    if(flag==1)
    {
        printf("Key is found in %dth position\n", mid+1);
    }
    else 
    {
        printf("Key not found\n");
    }
}