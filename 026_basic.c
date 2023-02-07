#include<stdio.h>
#include<conio.h>
#define MAX 5
int s[MAX], top=-1;
void push();
void pop();
void display();
void exit();

void main()
{
    int ch;
    do
    {
        printf("\n-------------------Stack Menu---------------------\n");
        printf("1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT\n");
        printf("\n--------------------------------------------------\n");
        printf("Enter your choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1: push();
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: exit();
                    break;
        }
    }while(ch!=4);
}

void push()
{
    int n;
    if(top==MAX-1)
    {
        printf("Overflow\n");
    }
    else
    {
        printf("Enter an element\n");
        scanf("%d", &n);
        top=top+1;
        s[top]=n;
    }
}

void pop()
{
    int n;
    if(top==-1)
    {
        printf("Underflow\n");
    }
    else
    {
        n=s[top];
        top=top-1;
        printf("The popped element is %d", n);
    }
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack is empty\n");
    }
    else
    {
        printf("\nElements of stack");
        for(i=top; i<=0; i--)
        {
            printf("\n%d", s[i]);
        }
    }
}

