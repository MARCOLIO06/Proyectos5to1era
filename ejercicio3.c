#include<stdio.h>

//Encontrar el mayor y el menor elemento de un arreglo usando punteros y
//funciones.

int vec[5]={3,5,4,1,2};
int num1,num2;

void ordenar(int *vec,int *num1,int *num2){
	int x,aux,y;
	for(x=0;x<5;x++){
		for(y=0;y<5;y++){
		if( *(vec+x) > *(vec+y) ){
			aux=*(vec+x);
			*(vec+x)=*(vec+y);
			*(vec+y)=aux;
		}
		
		}
	}
	
*num1=*(vec);
*num2=*(vec+5-1);
	
}

int main(){
	int x;
	printf("Vector\n");
	for(x=0;x<5;x++){
		printf("%d ",vec[x]);
	}
	
	ordenar(vec,&num1,&num2);
	printf("\nNumero mayor %d\nNumero menor %d",num1,num2);
	
}
