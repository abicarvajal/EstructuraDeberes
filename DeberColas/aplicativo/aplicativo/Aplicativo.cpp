// Aplicativo.cpp: define el punto de entrada de la aplicación de consola.
//
/*				UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE
						ESTRUCTURA DE DATOS
						 ABIGAIL CARVAJAL
														*/


#include "stdafx.h"
#include<iostream>
#include<time.h>
#include<string>
#include"Proceso.h"
#include"Cola.h"


using namespace std;
int main()
{
	int nclientes;
	printf("		UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE\n");
	printf("			ESTRUCTURA DE DATOS\n");
	printf("			 ABIGAIL CARVAJAL\n");
	printf("Ingrese el numero de clientes: ");
	scanf("%d", &nclientes);
	while (nclientes <= 0) {
		printf("Ingrese numero de clientes mayor a cero: ");
		scanf("%d", &nclientes);
	}
	system("cls");
	printf("\n\n**************************************** TABLA DE CLIENTES ***************************************\n");
	printf("\n\nN° C \t T. Llegada\tT. Espera\tT. Descanso\tT. Servicio\tT. Salida\tT. Llegada");
	int num = 0,tiempoSer=0;
	srand(time(NULL));
	for (int i = 0; i < nclientes; i++)
	{
		num = 1 + rand() % (10 - 1);
		tiempoSer = 1 + rand() % (16 - 1);
		push(num,tiempoSer);
	}
	printf("\n");
	imprimir();
	printf("\n**************************************************************************************************\n");
	system("pause");
    return 0;
}

