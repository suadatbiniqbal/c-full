#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*special char that cant be modified*/

    const int num = 5;
    printf("%d\n", num);

     printf("Hello %d\n", num);

    return 0;
}
