#include<stdio.h>

int main()
{
    int n = 30;
    int i;
    for( i=0; i < n; i++){
        //continue;            forsa todo y no muestra nada pero el hace las interaciones 
        //break;               se ronpe todo y muestra 0
        printf("el valor actual de i es %d \n", i);
    }
    printf("el valor actual de i es %d \n", i);

}