#include "functions.h"

int factorial(int n){
	if(n<0)
	{
		printf("Error Code -1 : Negative Number.");
		return;
	}
	// IronHide14 : Yo mofos
	if(n!=1){
	return(n * factorial(n-1));
    	}
  	  else return 1;
}
