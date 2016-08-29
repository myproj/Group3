#include "functions.h"

<<<<<<< HEAD
int factorial(int n){
	while(n<0)
	{
		printf("Re-enter a password");
		scanf("%d",&n);
	}
=======
int factorial(int n)
{
    while
    {
	printf("Enter a positive number : ");
	scanf("%d",&n);
    }

>>>>>>> 89cba4c87072ed89a4311c164941d7e0747f590a
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;

}
