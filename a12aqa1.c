//Student Record
#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    float m1,m2,m3;
};
int main()
{
    struct Student s;
    float total,avg;
    char grade;
    printf("Enter roll number: ");
    scanf("%d",&s.roll);
    printf("Enter name: ");
    scanf("%49s",s.name);
    printf("Enter marks in 3 subjects: ");
    scanf("%f%f%f",&s.m1,&s.m2,&s.m3);

    total=s.m1+s.m2+s.m3;
    avg=total/3;

    if(avg>=90)
        grade='O';
    else if(avg>=80)
        grade='A';
    else if(avg>=70)
        grade='B';
    else if(avg>=60)
        grade='C';
    else
        grade='F';

    printf("\nRoll Number: %d",s.roll);
    printf("\nName: %s",s.name);
    printf("\nTotal Marks: %.2f",total);
    printf("\nAverage Marks: %.2f",avg);
    printf("\nGrade: %c",grade);
    return 0;
}
