#include <stdio.h>

//como usar bien los ||, && y !,   https://en.cppreference.com/w/c/language/operator_logical

int n = -1;

int main()
{
    if(n > 10 && n < 20) // todo lo que esta adentro de los () se tiene que conplir pero si ponemos una or || se ucunple despues de que una de las operaciones sea verdadera 

    printf("numero es mayor que dies pero menor que 20");
    else if (n == 10)
    printf("el numero es diez");
    else if (n > 20)
    printf("el numero es mayor a 20");
    else if (n < 10 && n>= 0)
    printf("el numero esta en el rango de 0 a 9");
    else 
    printf("error no quiero nueros negativos");
    return 0;
}