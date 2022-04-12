#include <stdio.h>
#include <locale.h>

main(){
	setlocale (LC_ALL, "Portuguese");
	
	
	int i;
	float notas[5]= {7, 8, 9, 9.5, 9.9,};
	// declaração
	
	printf (" Exibir os valores do array \n");
	for (i=0; i <=4;i=i+1){
		printf ("Notas [%d]= %f \n", i, notas[i]);
	}

	

system ("pause");
	
	
}
	

