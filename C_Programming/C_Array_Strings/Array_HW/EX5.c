/*
 * EX5.c
 *
 *  Created on: 21 Jul 2023
 *      Author: Shams
 */

#include<stdio.h>

void main(){
	int matrix[200], num_elements, number;
	printf("Enter number of elements: ");
	fflush(stdout);  fflush(stdin);
	scanf("%d",&num_elements);
	for(int i =0;i<num_elements;i++){
		scanf("%d",&matrix[i]);
	}
	printf("Enter the elements to be searched: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&number);
	for(int i =0;i<num_elements;i++){
		if (matrix[i]==number){

			printf("Number found at location = %d",i+1);
			break;
		}
	}
}

