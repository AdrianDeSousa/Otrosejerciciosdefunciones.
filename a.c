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
	float c, n1, n2;
	n1=a;
	n2=b;
	c=n1/n2;
	return c;
}

int main() {
	int d=0, a, b, T, m=0;
	float DI;
	printf("ingrese valor de a:\n");
	scanf("%d", &a);
	printf("ingrese valor de b:\n");
	scanf("%d", &b);
	
	printf("ingresa opcion 1(suma), 2(resta),3(multiplicacion) o 4(division)\n");
	scanf("%d", &d);
	
	if(d == 1) {
		T=SUMA(a, b);
		printf("el resultado de la suma es:%d\n",T);
	}
	else if (d == 2){
		RESTA(a, b);
	}
	else if (d == 3){
		m=a*b;
		printf("el resultado de la multiplicacion es:%d\n",m);
	}
	else if (d == 4){
		DI=DIVISION(a,b);
		printf("el resultado de la division es:%.2f\n",DI);
	}
	else {
		printf("ingresa una opcion valida");
	}
	return 0;
}
