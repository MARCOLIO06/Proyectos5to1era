#include<stdio.h>


int main(){
	
	char oracion[100];
	int x,dim,opcion,cont=2,cont2=0;
	printf("Ingrese una oracion: ");
	fgets(oracion,sizeof(oracion),stdin);
	dim= strlen(oracion);
	printf("Eliga una opcion:\n1)Pasar a mayusculas\n2)Pasar a minusculas\n3)Intercalar myuscula y minuscula\n4)Solo primeras letras en mayusculas\n");
	scanf("%d",&opcion);
	switch(opcion){
		case 1:
	
	
	//mayusculas
	for(x=0;x<dim;x++){
		if(oracion[x]>='a'&&oracion[x]<='z'){
			oracion[x]=oracion[x]-32;
		}		
		
	}
	printf("La oracion en mayusculas es: %s\n", oracion);
	break;
	case 2:
	//minusculas
	for(x=0;x<dim;x++){
		if(oracion[x]>='A'&&oracion[x]<='Z'){
			oracion[x]=oracion[x]+32;
		}		
		
	}
	printf("La oracion en minusculas es: %s\n", oracion);
	
	break;
	case 3:
		//intercalar
	for(x=0;x<dim;x++){
		if(oracion[x]!=' '){
		if(cont%2==0){
			if(oracion[x]>='a'&&oracion[x]<='z'){
				oracion[x]=oracion[x]-32;
			}
			
			}else{
				if(oracion[x]>='A'&&oracion[x]<='Z'){
				oracion[x]=oracion[x]+32;
				}
			}
			cont++;		
			
		}
	}
	printf("La oracion intercalada es: %s\n", oracion);
		break;
		
	case 4:
	if(oracion[0]>='a'&&oracion[0]<='z'){
				oracion[0]=oracion[0]-32;
			}
		
		
	for (x = 1; oracion[x] != '\0'; x++) {
        if (oracion[x - 1] == ' ' && oracion[x] >= 'a' && oracion[x] <= 'z') {
            oracion[x] = oracion[x] - 32;
        }
    }
	printf("Oracion donde solo las primeras letras estan en mayusculas %s\n", oracion);
		
		
		
		break;
		
		
		
			
	}
	
}
