#include<stdio.h>
int main()
{
    int n,i,j;
    int isSymmetric = 1;

    printf("Enter the Dimension Of Matrix:\n");
    scanf("%d",&n);

    int mat[n][n];

    printf("Enter The Elements of %d X %d Matrix\n",n,n);
    for( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            scanf("%d",(*(mat + i) + j));
        }
    }

    for( i = 0; i < n; i++ )
    {
        for ( j = 0; j < n; j++ )
        {
            if (*(*(mat + i) + j) != *(*(mat + j) + i))
            {
                isSymmetric = 0;
                break;
            }
        }
    }


    if(isSymmetric)
    {
        printf("The above Matrix is Symmetric");
    }

    else 
    {
        printf("The above Matrix is NOT a Symmetric");
    }

    return 0;
}