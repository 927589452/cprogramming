/*
 * =====================================================================================
 *
 *       Filename:  grade.c
 *
 *    Description:  print string based on grade
 *
 *        Version:  1.0
 *        Created:  03/25/17 12:11:34
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
	/* local variable definiton */
	char grade = 'B';

	switch(grade)
	{
		case 'A':
			printf("Nice \n");
			break;

		case 'B':
		case 'C':
			printf("Well done \n");
			break;
		case 'D':
			printf("Passed \n");
			break;
		case 'E':
		case 'F':
			printf("You screwed up! \n");
			break;
		default:
			printf("Don't screw with me! \n");
	}
	printf("Your grade is %c \n",grade);

	return 0;
}
