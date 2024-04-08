#include<stdio.h>
#include<string.h>


int main(){
	
	char cadena[20];
	int cont=0,x;
	printf("Ingrese una cadena: ");
	fgets(cadena,sizeof(cadena),stdin);
	//scanf("%s",&cadena);
	
	int dim=strlen(cadena);
	
	for(x=0;x<dim;x++){
		if(cadena[x]=='a'||cadena[x]=='e'||cadena[x]=='i'||cadena[x]=='o'||cadena[x]=='u'||cadena[x]=='A'||cadena[x]=='E'||cadena[x]=='I'||cadena[x]=='O'||cadena[x]=='U'){
			cont++;
		}
	}
	
	printf("La cantidad de vocales son %d",cont);





	return 0;
}
