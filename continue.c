/*
 * =====================================================================================
 *
 *       Filename:  continue.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/17 08:40:21
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

int main ()
{
	int a = 10;
	do
	{
		if ( a == 15)
		{
			a ++;
			continue;
		}
		printf("value of a: %d \n",a);
		a++;
	}while( a < 20);
	return 0;
}
