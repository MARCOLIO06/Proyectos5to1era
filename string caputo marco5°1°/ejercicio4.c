#include<stdio.h>
#include<string.h>


int main(){

char cadena[20],letra,letra2;
int x;
printf("Ingrese una cadena: ");
scanf("%s",&cadena);
printf("Ingrese que letra quiere cambiar de la cadena: ");
scanf(" %c",&letra);
printf("Ingrese por cual letra de la cadena la va a cambiar: ");
scanf(" %c",&letra2);

int dim=strlen(cadena);

for(x=0;x<dim;x++){
if(cadena[x]==letra){
	cadena[x]=letra2;
}	
}
printf("Cadena resultante: %s",cadena);


return 0;
}
