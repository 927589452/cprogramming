/*
 * =====================================================================================
 *
 *       Filename:  findprime.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/17 08:15:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int max = 100000;

int main ()
{
	int i,j;
	for (i=2;i<max;i++)
	{
		for (j=2; j<= (i/j); j++)
		{
			//	printf("trying %d for %d\n",j,i);
			if (!(i%j)) break; /* If a number is divisable, 
					      *there is no rest
					      * it is rahter ineffective,
					      * better would be to use 
					      * a table of primes
					      * and try them from there
					      */
		}
		if (j > (i/j)) printf("%d is prime \n",i );
	}
}
