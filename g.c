#include <stdio.h>
float m_docena (float T)
{
	float D;
	D=(T-((T*4/100)));
	return D;
}

float docena (float T)
{
	float D;
	D=(T-((T*10/100)));
	return D;
}
int main() {
	int c, p;
	float PM, T;
	printf("ingrese la cantidad que llevas: \n");
	scanf("%d", &c);
	printf("ingrese el precio del producto: \n");
	scanf("%d", &p);
	
	T=c*p;
	
	if (c >= 6){
		PM=m_docena(T);
		printf("el Total con descuentro es: %.2f\n", PM);
		printf("el Total sin descuento es: %.2f\n", T);
	}
	else if (c >= 12) {
		PM=docena(T);
		printf("el Total con descuentro es: %.2f\n", PM);
		printf("el Total sin descuento es: %.2f\n", T);
	}
	else {
		printf("El total es: %.2f\n", T);
	}
	return 0;
}
