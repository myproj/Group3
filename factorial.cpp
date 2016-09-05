#include "functions.h"

int factorial(int n){
	if(n<0)
	{
		printf("Error Code -1 : Negative Number.");
		return;
	}
<<<<<<< HEAD
=======

>>>>>>> 8108c43a57c8bc0ed03cdcfce4113473c259e7d0
	if(n!=1){
	return(n * factorial(n-1));
    	}
  	  else return 1;
}
