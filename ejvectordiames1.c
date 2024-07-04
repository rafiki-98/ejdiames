#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int VDM[13]={0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int c=0;
	int mes=0;
	
	for(c=0;c<=12;c++)
	{
		printf("\n ingrese el numero de mes: \n");
		scanf("%d", &mes);
		
		if(mes>=1&&mes<=12)
		{
			printf("el mes ingresado tiene %d  dias \n", VDM[mes]);
		}
		else
		{
			printf("el numero de mes no valido");	
		}
	}
	
	return 0;
}
