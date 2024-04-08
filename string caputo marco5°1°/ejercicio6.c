#include<stdio.h>
#include<string.h>


int main(){

char cadena1[20],cadena2[20];
int x,y,aux,cont=0;
printf("Ingrese primera cadena: ");
scanf("%s",&cadena1);
printf("Ingrese segunda cadena: ");
scanf("%s",&cadena2);


int dim1=strlen(cadena1);
int dim2=strlen(cadena2);
if(dim1!=dim2){
	printf("No es un anagrama. ");
	return 0;
}
//ordenamiento cadena 1
for(x=0;x<dim1;x++){
	for(y=0;y<dim1-1;y++){
		if(cadena1[y]>cadena1[y+1]){
			aux=cadena1[y];
			cadena1[y]=cadena1[y+1];
			cadena1[y+1]=aux;
		}
	}
}
//ordenamiento cadena 2
for(x=0;x<dim1;x++){
	for(y=0;y<dim1-1;y++){
		if(cadena2[y]>cadena2[y+1]){
			aux=cadena2[y];
			cadena2[y]=cadena2[y+1];
			cadena2[y+1]=aux;
		}
	}
}

//	printf("\n%s",cadena1);
//	printf("\n%s",cadena2);

for(x=0;x<dim1;x++){
	if(cadena1[x]!=cadena2[x]){
		
	}else{
	cont=1;
	}
}

if(cont==1){
		printf("Es un anagrama. ");
}else {
	printf("No es un anagrama. ");
}


return 0;
}
