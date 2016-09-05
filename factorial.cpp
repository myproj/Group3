#include "functions.h"

int factorial(int n){
	while(n<0)
	{
		cout<<"Enter a positive number : ";
		cin>>n;
	}
	// IronHide14 : Yo mofos
	if(n!=1){
	return(n * factorial(n-1));
    	}
  	  else return 1;
}
