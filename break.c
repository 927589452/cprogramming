/*
 * =====================================================================================
 *
 *       Filename:  break.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/17 08:37:41
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

	while ( a < 20 )
	{
		printf("value of a : %d \n",a);
		a++;
		if ( a > 15 )
		{
			break;
		}
	}
	return 0;
}
