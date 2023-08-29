#include <stdio.h>

int resultado (int n) {
	int R;
	R=n*n-2*n;
	return R;
}

int main() {
	int n, resultadoT;
	
	printf("Ingrese un número: ");
	scanf("%d", &n);
	
	resultadoT=resultado(n);
	
	printf("El resultado de restar el doble de %d a su cuadrado es: %d\n", n, resultadoT);
	
	return 0;
}
