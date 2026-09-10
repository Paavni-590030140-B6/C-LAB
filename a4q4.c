//Keywords Identification
#include <stdio.h>
int main()
{
    int marks;
    float percentage;
    char grade;
    const int totalmarks = 500;

    printf("enter marks obtained out of 500: ");
    scanf("%d", &marks);

    percentage = ((float)marks / totalmarks) * 100;

    if (percentage >= 90)
    {
        grade = 'a';
        printf("grade: a\n");
    }
    else if (percentage >= 75)
    {
        grade = 'b';
        printf("grade: b\n");
    }
    else if (percentage >= 60)
    {
        grade = 'c';
        printf("grade: c\n");
    }
    else if (percentage >= 40)
    {
        grade = 'd';
        printf("grade: d\n");
    }
    else
    {
        grade = 'f';
        printf("grade: f\n");
    }

    printf("percentage = %.2f%%\n", percentage);
    printf("grade = %c\n", grade);
    return 0;
}