#include <stdio.h>
#include <locale.h>



numero () {
	return 10;
}

ola (){
	printf ("Ola linda sala \n");
}

main () {
	setlocale (LC_ALL, "Portuguese");
	
	printf ("%d \n \n", numero ());
	ola ();
	

	
	
	
	
	system ("pause");
}
