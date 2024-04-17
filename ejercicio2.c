#include<stdio.h>
//Encontrar la suma y el promedio de los elementos de un arreglo usando
//punteros y funciones.

int suma;
float promedio;

void suma_y_promedio(int *vec,int dim,int *suma,float *promedio){
int y;
for(y=0;y<dim;y++){
*suma += *(vec+y);	
}

*promedio= (float)*suma/dim;






}

int main(){
	int dim,x;
	printf("Ingrese la cantidad de numeros. ");
	scanf("%d",&dim);
	int vec[dim];
	
	for(x=0;x<dim;x++){
		printf("Ingrese un numero. ");
		scanf("%d",&vec[x]);
	}
	
	
	
	 suma_y_promedio(vec,dim,&suma,&promedio);

	printf("Suma %d\nPromedio %f",suma,promedio);
	
	






	
}
