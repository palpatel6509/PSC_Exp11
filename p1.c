#include<stdio.h>

void swap( int *x , int *y )
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;

    printf("Enter two numbers:\n");
    scanf("%d %d",&a,&b);

    printf("Before Swapping: a = %d , b = %d\n",a,b);
    swap(&a,&b);
    printf("After Swapping: a = %d , b = %d\n",a,b);

    return 0;
}