// Bubble Sort
#include<stdio.h>
int main()
{
    int i, j, k, n, b, temp, a[100];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        printf("Enter the elements :");
        scanf("%d", &a[i]);
    }
    for(b=0; b<n-1; b++)
    {
        for(k=0; k<n-1; k++)
        {
            if(a[k]>a[k+1])
            {
                temp=a[k];
                a[k]=a[k+1];
                a[k+1]=temp;
            }
        }
    }
    for(j=0; j<n; j++)
    {
        printf("%d\t", a[j]);
    }
}