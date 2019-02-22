// Adivinar un numero aleatorio
// 22-II-19. AZB

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	//Presentacion
	//Variables
	char repetir;
	int na, nu, fin;
	
	//Proceso
	do
	{
		//El numero aleatorio
		srand (time(NULL));
		na = rand () % 200 + 1;
		printf("El numero aleatorio es %d",na);
		//Adivinar...
		fin=0;
		while (fin==0); 
		{
		do
		{
			printf("\n\n\tIntroduzca un numero entre 1 y 100:  ");
			scanf("%d, &nu");
			fflush (stdin);
		} while (nu < 1 || nu > 100);
		//El proceso...
		if(nu==na)
		{
			printf("\n\t\t¡¡¡Enhorabuena ha acertado!!!...");
			fin = 1;
		}
		else if (nu > na) printf("\n\t\tSe ha pasado...");
			else printf("Se ha quedado corto");
			fin=0;
			
		}
		//Repeticion 
		printf("\n\t¿Desea volver a jugar?");
		scanf("%s; &repetir");
		fflush (stdin);
	} while(repetir == 's' || repetir == 's');
	
	return 969;
}
