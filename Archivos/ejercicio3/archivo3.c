#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*
Realizar un programa en el cual se ingresen los siguientes datos
Nombre, Apellido y DNI
a) Crear un menu donde se ingresen los datos y los guarde en un
archivo
b) Otro ítem donde se pueda realizar una búsqueda por DNI y
devuelva los datos de Nombre y apellido
c) Salir del mismo
Modificar el programa anterior de manera que se puedan realizar
búsquedas por Apellido y por nombre a la vez.


Agregarle validación de datos de manera que no se repitan cuando
sea necesario.
*/

void buscarNombreApellido(FILE *fp, char nombre[], char apellido[]);

int main(){
	int opcion,dni,dni_leido;
	char nombre[20],apellido[20],nombre_leido[20],apellido_leido[20];
	
	FILE *fp;
	fp= fopen("fichero3.txt","a+");
	
	if(fp==NULL)
	{
		printf("No esta creado el fichero.");
	}
	
	do{
		
		printf("\t\t\tPrograma Marco\n");
		printf("1)Ingresar nombre,apellido y dni\n");
		printf("2)Busqueda por nombre y apellido\n");
		printf("3)Salir\n");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:
				printf("\nIngrese Nombre: ");
                scanf("%s",nombre);
                printf("Ingrese Apellido: ");
                scanf("%s",apellido);
                printf("Ingrese DNI: ");
                scanf("%d",&dni);
                
                
                
              fseek(fp, 0, SEEK_SET);  // Movemos el puntero al inicio del archivo

                while (fscanf(fp, "%s %s %d", nombre_leido, apellido_leido, &dni_leido) != EOF) {
                    if (dni == dni_leido) {
                        printf("Persona ya registrada\n");
                        break;
                    }
                }

                if (feof(fp)) {
                    fprintf(fp, "%s %s %d\n", nombre, apellido, dni);
                    printf("Datos guardados correctamente.\n");
                }   
                
				
				break;
			case 2:
				
				printf("\nIngrese nombre a buscar ");
                scanf("%s", &nombre);
                printf("\nIngrese apellido a buscar ");
                scanf("%s", &apellido);
               
			    buscarNombreApellido(fp, nombre, apellido);

				break;
			case 3:
				break;
		}
		
	}while(opcion!=3);
	fclose(fp);
		
}


void buscarNombreApellido(FILE *fp, char nombre[], char apellido[]){
    char nombre_leido[20], apellido_leido[20];
    int dni_leido;
    fseek(fp, 0, SEEK_SET);  // Movemos el puntero al inicio del archivo
    
    while (fscanf(fp, "%s %s %d", nombre_leido, apellido_leido, &dni_leido) != EOF) {
        if (strcmp(nombre, nombre_leido) == 0 && strcmp(apellido, apellido_leido) == 0) {
            printf("Nombre: %s\nApellido: %s\nDNI: %d\n", nombre_leido, apellido_leido, dni_leido);
            return;
        }
    }
    
    printf("Persona no encontrada.\n");
}

