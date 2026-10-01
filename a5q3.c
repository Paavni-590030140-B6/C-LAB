//bmi classification
#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("enter weight in kg: ");
    scanf("%f", &weight);

    printf("enter height in metres: ");
    scanf("%f", &height);

    if (weight <= 0 || height <= 0)
    {
        printf("invalid input");
    }
    else
    {
        bmi = weight / (height * height);

        printf("bmi = %.2f\n", bmi);

        if (bmi < 18.5)
            printf("underweight");
        else if (bmi < 25)
            printf("normal");
        else if (bmi < 30)
            printf("overweight");
        else if (bmi < 35)
            printf("obesity class i");
        else if (bmi < 40)
            printf("obesity class ii");
        else
            printf("obesity class iii");
    }

    return 0;
}