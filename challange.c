/*
 * challange.c
 *
 *  Created on: Feb 18, 2024
 *      Author: Eng.Hany Ashraf
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

#define SIZE 5
void get_input(char **p)
{
	*p=(char *)malloc(sizeof(char));
	if( p==NULL )
	{
		fprintf(stderr,"Unable to allocate a memory location !\n");
		exit(1);
	}
	printf("Enter the Member !");
	fflush(stdout);
	scanf("%s", *p);
}

int main(void)
{
	char *array[SIZE];
	for(char x=0; x<SIZE; x++)
	{
		get_input(array+x);
	}

	for(int x=0;x<SIZE;x++)
	{
		printf("%s\n",array[x]);
	}
	return(0);
}
