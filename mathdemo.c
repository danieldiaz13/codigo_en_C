#include<stdio.h>
#include<math.h>


int x;
float result;


int main()
{
    printf("ingre el valor de x: ");
    scanf("%d", &x);
    result = sin(x);
    printf("el valor ingresado es: %d \n", x);
    printf("el valor de seno es: %f \n", result);

    return 0;
}