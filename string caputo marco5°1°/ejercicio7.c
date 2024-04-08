#include<stdio.h>
#include<string.h>


int main(){
char cadena1[20],cadena2[20],cadena3[20],cadena4[20],cadena5[20],cadenaR[20];
int x;
printf("Ingrese primer cadena: ");
scanf("%s",&cadena1);
printf("Ingrese segunda cadena: ");
scanf("%s",&cadena2);
printf("Ingrese tercera cadena: ");
scanf("%s",&cadena3);
printf("Ingrese cuarta cadena: ");
scanf("%s",&cadena4);
printf("Ingrese quinta cadena: ");
scanf("%s",&cadena5);


cadenaR[0] = cadena1[0];

    for(x=0; x < strlen(cadena1) ;x++)
    {
        if(cadena1[x] == cadena2[x] && cadena1[x] == cadena3[x] && cadena1[x] == cadena4[x] && cadena1[x] == cadena5[x])
        {
            cadenaR[x] = cadena1[x];
        }
    }

printf("La secuencia de caracteres que se repiten es la siguiente: %s",cadenaR);

}
