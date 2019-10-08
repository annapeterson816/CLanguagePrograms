#include <stdio.h>
#include <string.h>



int main()
{

	int days;
	int start;

	printf("Enter number of days in month: ");
	scanf("%d" , &days);

	printf("Enter starting days of the week (1=Sun, 7=Sat): ");
	scanf("%d" , &start);


	printf("Days: %d", days);
	printf(" Start Day: %d \n \n",  start);


	
	int j;
	int i = 1;

	int spaces;
	for (spaces = 1; spaces<start; spaces++){
		printf("    ");
	}

	while( i < days)
	{
		for(j=start; j<8; j++){
			if(i<10)
				printf("  %d ",i);
			if(i>=10 && i < days+1 )
				printf(" %d ", i); 
			i = i + 1;	
		}
		printf("\n");
		start=1;

	}




	return 0;
}



