#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int num,fact=1,cont=1;
	char rep;
	do
	{
	    printf("\nIntroduzca un numero:  ");
	    scanf("%d",&num);
		fflush (stdin);
		while(num>=cont)
		{
		fact=fact*cont;
		cont=cont+1;
	    }
		printf("\nEl factorial del numero elegido es %d",fact);
		printf("\n\n¿Desea continuar la operacion?(s/n)");
		scanf("%s",&rep);
		fflush (stdin);
	}   while (rep == 's');

}
