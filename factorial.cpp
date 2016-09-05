#include "functions.h"

int factorial(int n){
	while(n<0)
	{
		printf("Enter a positive number : ");
		scanf("%d",&n);
	}

	if(n!=1){
	return(n * factorial(n-1));
    	}
  	  else return 1;
}
