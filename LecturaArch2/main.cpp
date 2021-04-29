#include <fstream>
#include <iostream>
#include<stdlib.h>
#include<string.h>
#include <cstring>

int main ()
{
	
	FILE *archivo;
	char nombre[20];
	printf("LECTURA DE NOTAS Y CALCULO DE PROMEDIO\n\n");
	archivo = fopen ("Notas.txt" , "r");
	int nota = 0;
	int suma = 0;
	int total = 0;
	float promedio;
	if (archivo != NULL){
		
		while ((fscanf(archivo, "%[^\n]",nombre))!=EOF){
			
			fscanf(archivo,"%d",&nota);
			fgetc(archivo);
			printf("%s\n", nombre);
			printf("Nota: %d\n", nota);
			suma = suma + nota;
			total++;
		}
		
		promedio = (float)suma / (float)total;
		//printf("  total es: %d\n",total);
		//printf("  suma total es: %d\n",suma);
		printf("El promedio es: %0.3f\n",promedio);
	}else{
		printf("El archivo no existe o se produjo un error al abrirlo"); 
	} 
	fclose(archivo); 
	
	return 0;
	 
}
