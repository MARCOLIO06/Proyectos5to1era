#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char nombre[20];
    char apellido[20];
    int dni;
} Persona;
int i,j;
void buscarNombreApellido(FILE *fp, char nombre[], char apellido[]);
void mostrarPersonasOrdenadasPorDNI(Persona personas[], int num_personas);

int main(){
    int opcion,dni,dni_leido;
    char nombre[20],apellido[20],nombre_leido[20],apellido_leido[20];
    
    FILE *fp;
    fp= fopen("fichero4.txt","a+");
    
    if(fp==NULL)
    {
        printf("No esta creado el fichero.");
        return 1;
    }
    
    do{
        
        printf("\t\t\tPrograma Marco\n");
        printf("1)Ingresar nombre,apellido y dni\n");
        printf("2)Busqueda por nombre y apellido\n");
        printf("3)Mostrar personas ordenadas por DNI\n");
        printf("4)Salir\n");
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
                
                printf("\nIngrese nombre a buscar: ");
                scanf("%s", nombre);
                printf("\nIngrese apellido a buscar: ");
                scanf("%s", apellido);
                
                buscarNombreApellido(fp, nombre, apellido);
                
                break;
            case 3:
                // Leer los datos del archivo y almacenarlos en un array de estructuras
                fseek(fp, 0, SEEK_SET);  // Movemos el puntero al inicio del archivo
                int num_personas = 0;
                Persona personas[100]; // Suponiendo que hay menos de 100 personas en el archivo
                while (fscanf(fp, "%s %s %d", personas[num_personas].nombre, personas[num_personas].apellido, &personas[num_personas].dni) != EOF) {
                    num_personas++;
                }
                
                // Ordenar las personas por DNI
                for ( i = 0; i < num_personas - 1; i++) {
                    for ( j = 0; j < num_personas - i - 1; j++) {
                        if (personas[j].dni > personas[j + 1].dni) {
                            Persona temp = personas[j];
                            personas[j] = personas[j + 1];
                            personas[j + 1] = temp;
                        }
                    }
                }
                
                // Mostrar las personas ordenadas por DNI
                mostrarPersonasOrdenadasPorDNI(personas, num_personas);
                
                break;
            case 4:
                break;
        }
        
    }while(opcion!=4);
    fclose(fp);
    
    return 0;
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

void mostrarPersonasOrdenadasPorDNI(Persona personas[], int num_personas) {
    printf("Personas ordenadas por DNI:\n");
    for ( i = 0; i < num_personas; i++) {
        printf("Nombre: %s\nApellido: %s\nDNI: %d\n", personas[i].nombre, personas[i].apellido, personas[i].dni);
    }
}

