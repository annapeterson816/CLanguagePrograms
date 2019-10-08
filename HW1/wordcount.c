//Anna Peterson
//This function counts the number of chars, words, and line in a statement or txt file.

#include <stdio.h>
#include <string.h>



int main(void){


printf("Please enter a statement.\n ");

int last = 'n';
int char_counter=0;
int word_counter=1; //starting this at one because the first word does not have a space before it. 
int line_counter=0;

char previous = 'a';
char current_char = getchar();


while(current_char != EOF){

	if (current_char > -1 && current_char < 128) 
		char_counter +=1;
	if (current_char == '\n')
		line_counter +=1;
	if (isspace(previous) != 0 && ((current_char >32 && current_char < 127))){
		word_counter +=1;
	}
	
	previous = current_char;
	current_char = getchar(); 
}


printf(" \n Your text has %d chars, %d words, and %d lines \n", char_counter, word_counter, line_counter);
return 0;
}

