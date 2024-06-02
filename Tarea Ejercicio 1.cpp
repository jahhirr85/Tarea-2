#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(int argc, char** argv) {
	int cedula;
	char nombre[30];
	char apellido[30];
	char opcion;
	int tipo = 0;
	int horas = 0;
	int precio = 0;
	int OP=0;
	int TC=0;
	int PR=0;
	int salario;
	int aumento=0;
	int bruto=0;
	int ccss=0;
	int neto=0;
	int acumuladoOP=0;
	int acumuladoTC=0;
	int acumuladoPR=0;
	int promedioOP=0;
	int promedioTC=0;
	int promedioPR=0;
	do {
		system("cls");
		printf("Digite el numero de cedula: ");
		scanf("%i",&cedula);
		printf("\nDigite el nombre del empleado: ");
		scanf("%s", nombre);
		printf("\nDigite el apellido del empleado: ");
		scanf("%s", apellido);
		printf("\nDigite el numero de empleado segun la siguiente tabla:\n 1- Operario\n 2- Tecnico\n 3- Profesional\n Tipo seleccionado: ");
		scanf("%i", &tipo);
		printf("Digite la cantidad de horas laboradas: ");
		scanf("%i", &horas);
		printf("Digite el precio por hora laborada: ");
		scanf("%i", &precio);
		salario = precio * horas;
		if (tipo==1) {
			OP++;
			aumento=salario*0.15;
			bruto=salario+aumento;
			ccss=bruto*0.0917;
			neto=bruto-ccss;
			acumuladoOP=neto+acumuladoOP;
			promedioOP=acumuladoOP/OP;
		}else  if(tipo==2) {
			TC++;
			aumento=salario*0.10;
			bruto=salario+aumento;
			ccss=bruto*0.0917;
			neto=bruto-ccss;
			acumuladoTC=neto+acumuladoTC;
			promedioTC=acumuladoTC/TC;	
		}else {
			PR++;
			aumento=salario*0.05;
			bruto=salario+aumento;
			ccss=bruto*0.0917;
			neto=bruto-ccss;
			acumuladoPR=neto+acumuladoPR;
			promedioPR=acumuladoPR/PR;
		}
		system("cls");
		printf("**********Resumen del empleado****************");
		printf("\nCedula:			%i", cedula);
		printf("\nNombre del empleado: 	%s", nombre);
		printf(" %s", apellido);
		if (tipo==1) {
			printf("\nTipo de empleado:	Operario");
		}else if(tipo==2){
			printf("\nTipo de empleado:	Tecnico");
		}else {
			printf("\nTipo de empleado:	Profesional");
		}
		printf("\nSalario por hora: 	%i", precio);
		printf("\nCantidad de horas: 	%i", horas);
		printf("\nSalario Ordinario: 	%i", salario);
		printf("\nAumento: 		%i", aumento);
		printf("\nSalario Bruto: 		%i", bruto);
		printf("\nDeduccion CCSS: 	%i", ccss);
		printf("\nSalario Neto: 		%i", neto);
		printf("\n");
		printf("\nDesea ingresar otro empleado: ");
		
		opcion= getch();
		
	}while (opcion == 's');
	system("cls");
	printf("*****************ESTADISTICAS*********************");
	printf("\nCantidad Empleados Tipo Operarios:		%i", OP);
	printf("\nAcumulado Salario Neto Operarios:		%i", acumuladoOP);
	printf("\nPromedio Salario Neto para Operarios:		%i", promedioOP);
	printf("\nCantidad Empleados Tipo Tecnico:		%i", TC);
	printf("\nAcumulado Salario Neto Tecnico:			%i", acumuladoTC);
	printf("\nPromedio Salario Neto para Tecnico:		%i", promedioTC);
	printf("\nCantidad Empleados Tipo Profesionales:		%i", PR);
	printf("\nAcumulado Salario Neto Profesional:		%i", acumuladoPR);
	printf("\nPromedio Salario Neto para Profesional:		%i", promedioPR);
	
	return 0;
}
