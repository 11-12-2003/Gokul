#include<stdio.h>

int a[100], n, i, ch, val, pos;
void create();
void display();
void insert();
void delete();
void exit();

int main()
{
    do
    {
    printf("\nEnter your choice\n");
    printf("1:Create\n2:Display\n3:Insert\n4.Delete\n5.Exit\n");
    scanf("%d", &ch);
        switch(ch)
        {
            case 1:create();
                   break;
            case 2:display();
                   break;
            case 3:insert();
                   break;
            case 4:delete();
                   break;
            case 5:exit();
                   break;
            default:printf("You have entered an invalid choice\n");
        }
    }while(ch!=5);
    return(0);
}

void create()
{
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements into the array\n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void display()
{
    printf("The elements in the array are\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", a[i]);
    }
}

void insert()
{
    printf("Enter the position where the element has to be inserted\n");
    scanf("%d", &pos);
    printf("Enter the value\n");
    scanf("%d", &pos);
    for(i=n-1; i>=pos-1; i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=val;
    n=n+1;
}

void delete()
{
    if(n!=0)
    {
        printf("Enter the position where the element has to be inserted\n");
        scanf("%d", &pos);
        for(i=pos-1;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n=n-1;
    }
    else
    {
        printf("Array is empty\n");
    }
}


