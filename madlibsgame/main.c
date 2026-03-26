#include <stdio.h>
#include <stdlib.h>

int main()
{

    char color [20];
    char noun [20];
    char celebrityF [20];
    char celebrityL [20];

    printf("Enter A Colour:");
    scanf("%s", &color);

    printf("Enter A name:");
    scanf("%s", &noun);

    printf("Enter A Celebrity:");
    scanf("%s %s", &celebrityF, celebrityL);

    printf("Roses are %s \n", color);
    printf("%s are blue\n", noun);
    printf("ilove %s %s\n", celebrityF, celebrityL );
    return 0;
}
