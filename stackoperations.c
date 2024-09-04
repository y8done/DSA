#include <stdio.h>

int a[5], top = -1;
void push()
{
    int x;
    printf("\nEnter the value you want to push into the stack:");
    scanf("%d", &x);
    if (top >= 4)
    {
        printf("\n Stack is overflow!!!!");
    }
    else
    {
        top++;
        a[top] = x;
        printf("\nPUSH operation is successfully performed!!");
    }
}
void pop()
{
    if (top <= -1)
    {
        printf("\n Stack is underflow!!!!");
    }
    else
    {
        top--;
        printf("\nPop operation is successfully performed!! \n The popped element is -%d", a[top + 1]);
    }
}
void peek()
{
    int i;
    printf("\nEnter the index you want to peek into the stack:");
    scanf("%d", &i);
    if (top - i + 1 <= -1)
    {
        printf("\n Stack is underflow!!!!");
    }
    else
    {
        printf("\nPeek operation is successfully performed!!\n The element at %d index in stack is %d", i, a[top - i + 1]);
    }
}
void change()
{
    int i, x;
    printf("\nEnter the index you want to change in the stack:");
    scanf("%d", &i);
    printf("\nEnter the value you want to change in the stack:");
    scanf("%d", &x);
    if (top - i + 1 <= -1)
    {
        printf("\n Stack is underflow!!!!");
    }
    else
    {
        a[top - i + 1] = x;
        printf("\nChange operation is successfully performed!!\n The element at %d index in stack is %d", i, x);
    }
}
void traverse()
{
    if (top <= -1)
    {
        printf("\n Stack is underflow!!!!");
    }
    else
    {
        for (int i = 0; i <= top; i++)
        {
            printf("\nElement %d : %d\n", i + 1, a[i]);
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf("\nChoose a operation from below:\n 1.PUSH\n 2.POP\n 3.PEEK\n 4.CHANGE\n 5.TRAVERSE:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            change();
            break;
        case 5:
            traverse();
            break;
        default:
            printf("\nEnter a valid choice !!!");
            break;
        }
    }
    return 0;
}