#include <stdio.h>
#include <stdlib.h>

/* function */
double cube(double num) {
    double result = num * num * num;
    return result;
}

int main()
{
    printf("answer: %f\n", cube(4.9));
    return 0;
}
