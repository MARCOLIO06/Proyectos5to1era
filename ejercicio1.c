#include<stdio.h>


int x=5,y=10;
void cambio(int *a,int *b){
	int aux=*a;
	*a=*b;
	*b=aux;

}

int main(){

printf("Valores antes del cambio %d %d",x,y);
cambio(&x,&y);
printf("\nValores despues del cambio %d %d",x,y);
}


