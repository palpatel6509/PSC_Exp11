#include<stdio.h>

struct Student {
    char name[50];
    int id;
    float percentage;
};

int main()
{
    struct Student s[50];
    struct Student *ptr = s;
    struct Student *topper = s;
    int n,i;

    printf("Enter number of Students:\n");
    scanf("%d",&n);

    for( i = 0; i < n; i++ )
    {
        printf("\nEnter Details for Student %d:\n",i+1);
        printf("Name: ");
        scanf("%s",(ptr+i)->name);
        printf("ID: ");
        scanf("%d",&(ptr+i)->id);
        printf("Percentage: ");
        scanf("%f",&(ptr+i)->percentage);

        /* UPDATE TOPPER POINTER IF CURRENT STUDENT HAS HIGHER PERCENTAGE */
        if((ptr + i)->percentage > topper->percentage)
        {
            topper = (ptr + i);
        }
    }

    printf("\n--- STUDENT WITH HIGHEST PERCENTAGE ---\n");
    printf("Name: %s\n",topper->name);
    printf("ID: %d\n",topper->id);
    printf("Percentage: %.2f\n",topper->percentage);

    return 0;
}