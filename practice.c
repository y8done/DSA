#include <stdio.h>
#include <conio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d", &n);
    int a[n];
    int choice;
    int index, x, y;
    int occupied = 0;
    while (1)
    {
        printf("\nEnter the operation you wanna perform:\n 1.Insertion at the end of the array \n 2.Insertion at specific index of array \n 3. Deletion at specific index in array:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the value you want to insert:");
            scanf("%d", &x);
            if (occupied != n)
            {
                a[occupied] = x;
                occupied++;
            }
            else
            {
                printf("Array is full!!!!");
            }
            break;
        case 2:
            printf("Enter the index at which you want to insert the value:");
            scanf("%d", &index);
            printf("Enter the value you want to insert:");
            scanf("%d", &y);
            if (index-1 > occupied || index <= 0)
            {
                printf("Out of the bound index!!");
            }
            else
            {
                if (occupied != n)
                {
                    for (int i = occupied; i >= 0; i--)
                    {

                        if (index - 1 == i)
                        {
                            a[i] = y;
                            break;
                        }
                        a[i] = a[i - 1];
                    }
                    occupied++;
                }
            }
            break;
        case 3:
            printf("Enter the index at which you want to delete the value:");
            scanf("%d", &index);
            if (index > occupied || index <= 0)
            {
                printf("Out of the bound index!!");
            }
            else
            {
                for (int i = index-1; i < occupied; i++)
                {
                    a[i] = a[i + 1];
                }
                occupied--;
            }
            break;
        default:
            printf("Enter a valid choice!!!");
            break;
        }
        printf("\nArray :");
        for (int i = 0; i < occupied; i++)
        {
            printf("\n%d", a[i]);
        }
    }
    return 0;
}