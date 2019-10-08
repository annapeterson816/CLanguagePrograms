
#include <stdio.h>
#include <stdlib.h>

int main( ) {

	int* arr = (int*) malloc(10*sizeof(int));
	int *p = &(arr[0]);
	
	int i=0;
	int current_digit;
	scanf("%d", &current_digit);
	int size = 1;
	int max = 0;

	while(current_digit != 0){
		if (current_digit != 0 )
			*(p +i) = current_digit;
		
		scanf("%d", &current_digit);

		if(i<9 && current_digit != 0){
			i = i+1;
			size = size+1;
		}


		else if(i == 9 && current_digit != 0){
			i=0;
			size = 1;
			max = 1;
		}
			

	}
	int len = size;
	int j;
	int index = size; 
	if (max ==1){
		for(j=0; j<10; j++){
			printf("%d ", *(p +index));
			if (index ==9)
				index = 0;
			else 
				index = index +	1;
		}
	}
	else{
		for(j=0; j<size; j++){
			printf("%d ", *(p+j));
		}
	}






}


