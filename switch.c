#include <stdio.h>
int opt1 = 0;
int opt2 = 0;


int main(){
    printf("bienvenido a platzi store\n");
    printf("opcion 0 para platzi bebidad \n");
    printf("opcion 1 para platzi comida \n");
    printf("opcion 2 para platzi postres \n");

    switch (opt1){
        case 0:
             /* deteccion de introsos */
             printf("usted eligio la opcion 0, vera nuestro menu de bebidas elije una:\n");
            printf("opcion 0 para platzi cola cero \n");
            printf("opcion 1 para platzi cola normal \n");
            printf("opcion 2 para platzi pina colada \n");

            switch (opt2)
            {
                case 0: 
                    printf("usted eligio una platzi cola cero, mm rico");
                    break;
            
                default:
                     break;
            }
                break;
        case 1:
             /* dispersar, corre a los intrisos*/
            break;
         case 2:
             /* dispersar, corre a los intrisos*/
            break;
        default:
            break;
    }
    return 0;
}
