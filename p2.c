#include<stdio.h>

void mystrcat( char *s , char *t )
{
    /* MOVE POINTERS s TO THE END OF FIRST STRING */
    while(*s != '\0')
    {
        s++;
    }

    /* COPY CHARACTERS FROM t TO s */
    while(*t != '\0')
    {
        *s = *t;
        s++;
        t++;
    }
    *s = '\0'; // ADD NULL CHARACTER AT THE END
}

int main()
{
    char str1[100] , str2[50];

    printf("Enter first String:\n");
    scanf("%s",str1);

    printf("Enter second String:\n");
    scanf("%s",str2);

    mystrcat( str1 , str2 );

    printf("Concatenated string: %s\n",str1);

    return 0;
}