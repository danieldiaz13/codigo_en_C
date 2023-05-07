#include <stdio.h>

    int a, b;
int add(int a, int b);

int main()
{
    printf("the result is: %d", add(200, 100));    
    return 0;
}

int add(int a, int b)
{
    int add;
    add = a + b;
    //printf("the result is: %d", add);    
    return add;
}