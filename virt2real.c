#include "types.h"
#include "user.h"


int stdout = 1;
int stderr = 2;


int
main(int argc, char *argv[])
{
	char *va = argv[1]; 

	//if (virt2real(va)) {
   	//	printf(stderr, "Erro na chamada de sistema\n");
    //	exit();
  	//}

  	printf(stdout, "%s \n", virt2real(va)); 
  	exit();
}
