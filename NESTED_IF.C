#include <stdio.h>

int opt1 = 1;
int opt2 = 0;


int main(){

    printf("bienvenido a platzi store\n");
    printf("opcion 0 para platzi bebidad \n");
    printf("opcion 1 para platzi comida \n");
    printf("opcion 2 para platzi postres \n");
    //ESTE PROGRAMA GENERA MENUS SEGUN LO QUE EL USUARIO ELIJA

    if (opt1 == 0){
        printf("usted eligio la opcion 0, vera nuestro menu de bebidas elije una:\n");
        printf("opcion 0 para platzi cola cero \n");
        printf("opcion 1 para platzi cola normal \n");
        printf("opcion 2 para platzi pina colada \n");
        
        if (opt2 == 0)
            printf("usted eligio una platzi cola cero, mm rico");
        else if (opt1 == 1)
            printf("usted eligio una platzi cola con azucar, mm rico");
        else if (opt1 == 2)
            printf("usted eligio una platzi pina colada con azucar, mm rico"); 
        else
            printf("opcion invalida");

    }

else if (opt1 == 1){
    printf("usted eligio la opcion 1, vera nuestro menu de comida elije una:\n");
    printf("opcion 0 para platzi hamburguesa vegetariana \n");
    printf("opcion 1 para platzi hamburguesa normal \n");
    printf("opcion 2 para platzi hamburguesa de pina colada \n");

    if (opt2 == 0)
            printf("usted eligio una platzi hamburguesa cero, mm rico");
        else if (opt1 == 1)
            printf("usted eligio una platzi hamburguesa con azucar, mm rico");
        else if (opt1 == 2)
            printf("usted eligio una platzi hamburguesa pina, mm rico"); 
        else
            printf("opcion invalida");
}

else if (opt1 == 2){
    printf("usted eligio la opcion 1, vera nuestro menu de comida elije una:\n");
    printf("opcion 0 para platzi postre cero \n");
    printf("opcion 1 para platzi postre normal \n");
    printf("opcion 2 para platzi postre de pina colada \n");

    if (opt2 == 0)
            printf("usted eligio una platzi postre cero, mm rico");
        else if (opt1 == 1)
            printf("usted eligio una platzi postre con azucar, mm rico");
        else if (opt1 == 2)
            printf("usted eligio una platzi postre pina, mm rico"); 
        else
            printf("opcion invalida");
}

    
    return 0;
}