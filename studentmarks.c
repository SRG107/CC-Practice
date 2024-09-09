#include <stdio.h>

int main()
{
    int marks[5], i;
    float sum = 0, perc;

    for (int j=1; j<=5; j++)
    {
        printf("Enter marks of student %d out of 100",j);
        printf("\n");
        for (i = 0; i < 5; i++)
        {
            printf("Enter marks of subject %d: ", i + 1);
            scanf("%d", &marks[i]);
            sum += marks[i];
        }
        perc = sum / 5;
        printf("Percentage = %d");
        printf("\n");
    }
perc = sum / 5;
    return 0;
}