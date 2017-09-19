#include <stdio.h>
#include <stdlib.h>

int main()
{
    char vector[3];

    for(int i=0;i<3;i++){
        printf("Ingrese Nombre; ");
        fflush(stdin);
        scanf("%s",&vector[i]);

    }
     for(int i=0;i<50;i++){
        printf("los nombres son: %s ",vector[i]);

    }

    return 0;
}
