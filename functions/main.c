#include <stdio.h>
#include <stdlib.h>

/* Function Prototype */
void sayHi(char name[]);

int main()
{
    sayHi("mic");
    return 0;
}

/* Function Definition */
void sayHi(char name[]) {
    printf("Hello %s", name);
}
