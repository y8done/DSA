#include<stdio.h>
int main()
{
    int b=10;
    int *p=&b;
    
    printf("\nb=%d",b);
    printf("\n&b=%d",&b);
    printf("\n*p=%d",*p);
    printf("\np=%d",p);
    printf("\n&p=%d",&p);

    int a[]={1,2,3,4,5,6};
    int *q=a;
    printf("\n a=%p",a);
    q++;
    printf("\n q=%d",*q);
    printf("\n%p",(a+1));

}