#include <stdio.h>

int main() {
	int sas, saaas, L;
	printf("ingrese la cantidad de lineas que desee mostrar en pantalla: \n");
	scanf("%d", &L);
	for (sas=1;sas<=L; sas++) {
		for (saaas=1; saaas<=sas; saaas++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
