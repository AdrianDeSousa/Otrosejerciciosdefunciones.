#include <stdio.h>

void DM(int mes) {
	if (mes < 1 || mes > 12) {
		printf("Ingrese un mes válido\n");
	} else {
		if (mes == 1) {
			printf("El mes Enero tiene 31 días.\n");
		} else if (mes == 2) {
			printf("El mes Febrero tiene 28 días.\n");
		} else if (mes == 3) {
			printf("El mes Marzo tiene 31 días.\n");
		} else if (mes == 4) {
			printf("El mes Abril tiene 30 días.\n");
		} else if (mes == 5) {
			printf("El mes Mayo tiene 31 días.\n");
		} else if (mes == 6) {
			printf("El mes Junio tiene 30 días.\n");
		} else if (mes == 7) {
			printf("El mes Julio tiene 31 días.\n");
		} else if (mes == 8) {
			printf("El mes Agosto tiene 31 días.\n");
		} else if (mes == 9) {
			printf("El mes Septiembre tiene 30 días.\n");
		} else if (mes == 10) {
			printf("El mes Octubre tiene 31 días.\n");
		} else if (mes == 11) {
			printf("El mes Noviembre tiene 30 días.\n");
		} else if (mes == 12) {
			printf("El mes Diciembre tiene 31 días.\n");
		}
	}
}

int main() {
	int mes;
	
	printf("Ingrese un número del 1 al 12 para obtener el número de días en ese mes: \n");
	scanf("%d", &mes);
	
	DM(mes);
	
	return 0;
}
