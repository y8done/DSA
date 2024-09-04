#include <stdio.h>

int a[5], front = -1, rear = -1;
void enqueue()
{
    int x;
    printf("\nEnter the value you want to enqueue into the queue:");
    scanf("%d", &x);
    if (rear >= 4)
    {
        printf("\n Queue is overflow!!!!");
    }
    else
    {
        rear++;
        a[rear] = x;
        printf("\nEnqueue operation is successfully performed!!");
        if (front == -1)
        {
            front++;
        }
    }
}
void dequeue()
{
    if (rear <= -1)
    {
        printf("\n Queue is underflow!!!!");
    }
    else
    {
        if (rear == front)
        {
            rear = front = -1;
        }
        else
        {
            front++;
            
        }
        printf("\nDequeue operation is successfully performed!!");
    }
}

void traverse()
{
    if (rear <= -1)
    {
        printf("\n Queue is underflow!!!!");
    }
    else
    {
        for (int i = front; i <= rear; i++)
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
        printf("Choose a operation from below:\n 1.Enqueue\n 2.Dequeue\n 3.PEEK\n 4.CHANGE\n 5.TRAVERSE:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:

            enqueue();
            break;
        case 2:
            dequeue();
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