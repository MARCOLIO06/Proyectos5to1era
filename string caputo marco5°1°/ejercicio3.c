#include<stdio.h>
#include<string.h>


int main(){
	
	char cadena[20];
	int x,cont=0;
	printf("Ingrese una cadena para ver si es palindromo: ");
	scanf("%s",&cadena);
	int dim=strlen(cadena);
	
	for(x=0;x<dim;x++){
		if(cadena[x]==cadena[dim-x-1]){
			cont++;
		}
	}
	
	if(cont==dim){
		printf("La cadena es un palindromo. ");
	}else{
		printf("La cadena no es un palindromo. ");
	}
	return 0;
	
}
