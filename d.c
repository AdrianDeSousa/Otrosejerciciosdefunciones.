#include <stdio.h>

int main() {
	int sas, saaas;
	for (sas=1;sas<=5; sas++) {
		for (saaas=1; saaas<=sas; saaas++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
