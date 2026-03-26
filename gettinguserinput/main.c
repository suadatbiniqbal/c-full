#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    /*getting user input*/
    printf("enter your age:\n");
    scanf("%d", &age);

    double gpa;
    printf("Enter Your Gpa:");
    scanf("%lf", &gpa);

    printf("Your Gpa Is %f\n", gpa);
    printf("You Are %d years old ", age);

    return 0;
}
