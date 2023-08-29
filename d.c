#include <stdio.h>
void SAS (int sas, int saaas) {
	for (sas=1;sas<=5; sas++) {
		for (saaas=1; saaas<=sas; saaas++) {
			printf("*");
		}
		printf("\n");
}
}
	
	int main() {
		int sas, saaas;
SAS(sas, saaas);
		return 0;
	}
	
