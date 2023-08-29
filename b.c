#include <stdio.h>
#include <stdlib.h>
int SUMA (int a, int b)
{
	int c;
	c=a+b;
	return c;
}
void RESTA (int a, int b)
{
	int c;
	c=a-b;
	printf("el resultado de la resta es:%d\n",c);
}
float DIVISION (int a, int b)
{
	float c;
	c=(float)a/(float)b;
	return c;
}

int main() {
	int d=0, a, b, T, m=0;
	float DI;
	printf("ingrese valor de a:\n");
	scanf("%d", &a);
	printf("ingrese valor de b:\n");
	scanf("%d", &b);
	
	printf("\ningresa opcion 1 (suma), 2 (resta), 3( multiplicacion), 4 (division) u 5 (para detener el programa) \n\n");
	scanf("%d", &d);
	
	while (d > 0 && d < 5){
		
		if(d == 1) {
			T=SUMA(a, b);
			printf("\nel resultado de la suma es:%d\n",T);
		}
		else if (d == 2){
			RESTA(a, b);
		}
		else if (d == 3){
			m=a*b;
			printf("\nel resultado de la multiplicacion es:%d\n",m);
		}
		else if (d == 4){
			DI=DIVISION(a,b);
			printf("\nel resultado de la division es:%.2f\n",DI);
		}
		else {
			printf("\ningresa una opcion valida");
		}
		
		printf("\ningresa opcion 1 (suma), 2 (resta), 3(multiplicacion), 4 (division) u 5 (para detener el programa) \n\n");
		scanf("%d", &d);
	}
	if (d == 5) {
		printf ("\n terminado saas\n");
	}
	return 0;
}
