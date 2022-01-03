#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main () {
	setlocale(LC_ALL, "");
	int a, b;
	printf("Digite o valor de A:\n");
	scanf("%d",&a);
	printf("Digite o valor de B:\n");
	scanf("%d",&b);
	printf("O valor de A é:\t %d", a);
	printf("\nO valor de B é:\t %d", b);
	return 0;
}

