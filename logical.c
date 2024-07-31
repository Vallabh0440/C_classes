#include <stdio.h>
int main()
{
    int a = 10;
    int b = 20;

    printf("%d \n", (a < b && a > b)); // if single condition is false it will return false

    printf("%d\n", (a < b || a > b)); // if single condition is true it will return true

    printf("%d", !(a < b || a > b)); // reverse the answer
}
