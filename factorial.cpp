#include "functions.h"

int factorial(int n)
{
    do
    {
	printf("Enter a positive number : ");
	scanf("%d",&n);
    }while(n<0);

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
