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
*/
int main(){
	int opcion,dni,dni_leido;
	char nombre[20],apellido[20];
	
	FILE *fp;
	fp= fopen("fichero.txt","a+");
	
	if(fp==NULL)
	{
		printf("No esta creado el fichero.");
	}
	
	do{
		
		printf("\t\t\tPrograma Marco\n");
		printf("1)Ingresar nombre,apellido y dni\n");
		printf("2)Busqueda por dni\n");
		printf("3)Salir\n");
		scanf("%d",&opcion);
		
		switch(opcion){
			case 1:
				printf("\nIngrese Nombre: ");
                scanf("%s",&nombre);
                fputs(nombre,fp);
                printf("Ingrese Apellido: ");
                scanf("%s",&apellido);
                fputs(" ",fp);
				fputs(apellido,fp);
                printf("Ingrese DNI: ");
                scanf("%d",&dni);
                fprintf(fp," %d\n",dni);
                  
                printf("Datos guardados correctamente.\n");
				
				break;
			case 2:
				
				printf("\nIngrese DNI a buscar: ");
                scanf("%d", &dni);
                fseek(fp, 0, SEEK_SET);  // Movemos el puntero al inicio del archivo

                while (fscanf(fp, "%s %s %d", &nombre, &apellido, &dni_leido) != EOF) {
                    if (dni == dni_leido) {
                        printf("Nombre: %s\nApellido: %s\nDNI: %d\n", nombre, apellido, dni_leido);
                        break;  // Detenemos la búsqueda una vez que encontramos el DNI
                    }
                }

                if (feof(fp)) {
                    printf("DNI no encontrado.\n");
                }

				break;
			case 3:
				break;
		}
		
	}while(opcion!=3);
	fclose(fp);
	

	
	
	
}

