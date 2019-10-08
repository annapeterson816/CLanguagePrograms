// Anna Peterson


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main( ){


	printf("Please enter two lines of a string to compare lexicographically \n");

	int* first_line = (int*) malloc(40*sizeof(int));
	int* second_line = (int*) malloc(40*sizeof(int));

	int current_line = 1;
	char current_char = getchar();
	int i=0;
	int larger = -1; //gives which line is larger


	//add to array
	while(current_char != EOF){
		
		if (current_char == '\n' && current_line==2){
			break;
		}
		
		else if (current_char == '\n' && current_line==1){
			i=0;
			current_line=2;
		}
	
		else if (current_line == 1){
			first_line[i] = current_char;
			i = i+1;
		}

		else if(current_line == 2){
			second_line[i] = current_char;
			i=i+1;
		}
		else 
			printf("error");

		current_char = getchar();
	}


	//Helpful print statements
	/*   
	int q;
	printf("Array 1:");
	for(q=0; q<sizeof(first_line);q++)
		printf("_%c_", first_line[q]);

	printf("Array 2:");
	for(q=0; q< sizeof(second_line);q++)
		printf("_%c_", second_line[q]);

	printf("\n Size of array 1: %d", sizeof(first_line));
	printf("\n Size of array 2: %d", sizeof(second_line));
	*/


	//computing lexicographically
	int j = 0;
	int first_size = sizeof(first_line);
	int second_size = sizeof(second_line);
	int bigsize = first_size;
	if(first_size < second_size)
		bigsize = second_size;
		
	for (j=0; j<bigsize; j++){
		//printf("\nFirst line char: %c", first_line[j]);
		//printf("\nSecond line char: %c", second_line[j]);
		if( first_line[j] > second_line[j]){
			larger = 1;
			break;
		}
		if (first_line[j] < second_line[j]){
			larger = 2;
			break;
		}
		else if(j == (sizeof(first_line) -2) && j != (sizeof(second_line) -2)){
			larger = 1;
			break;
		}
		else if(j != (sizeof(first_line) -2) && j == (sizeof(second_line) -2)){
			larger = 2;
			break;
		}
		else if(j == (sizeof(first_line) -1) && j == (sizeof(second_line) -1)){
			larger = 0;
			break;
		}
		else
			larger = 0;
	}

	//printing which one is larger
	if (larger ==1)
		printf(" \n The second line is lexicographically smaller.");
	if (larger==2)
		printf(" \n The first line is lexicographically smaller.");
	if (larger==0)
		printf("\n The lines are the same.");
	

		
			


}
