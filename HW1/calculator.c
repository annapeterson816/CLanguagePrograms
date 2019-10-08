//Anna Peterson
//This function takes in an operator and numerical value and calculates the expression. 

#include <stdio.h>



float processPlus(float amt, float val) {
	return amt + val;
}

float processMinus(float amt, float val) {
	return amt - val;
}
float processTimes(float amt, float val) {
	return amt * val;
}

float processDivide(float amt, float val) {
	return amt / val;
}

float processPrint(float amt) {
	printf("%f \n", amt);
	return amt;
} 


float processClear() {
	return 0;
}


float processOp(float amt, char op, float val) {
	if (op == '+')
		return processPlus(amt, val);
	else if (op == '-')
		return processMinus(amt, val);
	else if (op == '*')
		return processTimes(amt, val);
	else if (op == '/')
		return processDivide(amt, val);
	else if (op == '=')
		return processPrint(amt);
	else if (op == 'C')
		return processClear();
	else {
		printf("Bad Operator");
		return amt;
	}
}

int main(void){



	float amt = 0.0F; // the current value of the calculator
	char op; // the operation to be performed
	float val = 0; // the value of the operation

	printf("CS 2271 Calculator \n");

	char previous = ' ';
	char current = getchar();
	while ((current  != EOF) && (current != ' ')){

		if(current == '+' || current == '*' || current == '-' || current == '/') 
			op = current;      //updating operator

		if (current > 47 && current < 58 && current != '\n')
			val = current - 48;     //updating value if the currentchar is not an operator key


		if (current == '\n' && previous != '=' ){
			//printf("Current Amount: %f", amt);
			//printf("Current operator: %c ", op);
			//printf("Current value: %f \n", val);
			
			amt = processOp(amt, op, val);

		}

		if (current == '=')
			processPrint(amt);

		if (current == 'C'){
			amt = 0;
			processPrint(amt);
		}
		

		previous = current;
		current = getchar();
		if (current == 'Q'){
			current == EOF;
			break;
		}
		
	}
	
	
	
	printf("\nThank you and goodbye! \n");

	return 0;
}

