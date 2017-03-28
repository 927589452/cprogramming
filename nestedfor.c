/*
 * =====================================================================================
 *
 *       Filename:  nestedfor.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/26/17 08:12:39
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
	for (int i=0;i<5;i++)
	{
		for (int j=0;j<5;j++)
		{
			printf("i %d j %d \n",i,j);
		}
	}
	return 0;
}
