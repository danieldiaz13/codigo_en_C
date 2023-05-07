#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];


int main()
{

    printf("Escribe una frase\n");
    gets(string1);
    printf("Escribe otra frase para conparar\n");
    gets(string2);

    if (strcmp(string1, string2) == 0)
        printf("ingresastes dos strings identicos\n");
    else
    {
        strcat(string1, string2);
        printf("ingresastes dos strings distintos si las unimos el resultado es %s \n", string1);
    }

    return 0;
}