#include<stdio.h>

int* findMax( int *arr , int n )
{
    int *maxPtr = arr; // ASSUME FIRST ELEMENT IS LARGEST
    int i;

    for( i = 1; i < n; i++ )
    {
        if(*(arr + i) > *maxPtr)
        {
            maxPtr = ( arr + i ); // UPDATE POINTER TO LARGE ELEMENT
        }
    }
    return maxPtr;
}

int main()
{
    int arr[50] , n , i;
    int *largest;

    printf("Enter number of elements:\n");
    scanf("%d",&n);

    printf("Enter %d elements:\n",n);
    for( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    largest = findMax( arr , n );
    
    printf("Maximum Number = %d\n",*largest);
    
    return 0;
}