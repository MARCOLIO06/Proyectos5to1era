#include<stdio.h>

//Copiar un arreglo en otro arreglo usando punteros y funciones. Mostrando
//el resultado final.

char vec[]="Hola mundo";
char vec2[20]="marco";
void copiar(char *vec,char *vec2,int dim){
	//strcpy(vec2,vec);
	int x;
	for(x=0;x<dim;x++){
		
		*(vec2+x)=*(vec+x);
	}
	
	
}
int main(){
	int x;
	printf("Vector antes de cambiar ");
	printf("%s\n",vec2);
	copiar(vec,vec2,sizeof(vec));
	printf("Vector despues de cambiar ");
	printf("%s ",vec2);
	

	
}
