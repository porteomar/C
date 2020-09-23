#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "lab01header.h"


int main(void)
{

	int status = 1;
	int selection;	
	floatFill();

	while (status == 1){
		fprintf(stderr, "\n");
		fprintf(stderr, "MENU\n");
		fprintf(stderr, "====\n");
		fprintf(stderr, "1. Total cash for specified month, day, and register\n");
		fprintf(stderr, "2. Total cash for the entire year\n");
		fprintf(stderr, "3. Total cash for the specified month\n");
		fprintf(stderr, "4. EXIT\n");
		fprintf(stderr  ,"Enter your selection (1 - 4): ");
	       	
		status = scanf("%d", &selection);	
			
		switch(selection){
			case 1:
				registerTotal();
				break;
			case 2:
			 	yearTotal();
				break;
			case 3:
				monthTotal();
				break;
			case 4:
				fprintf(stderr, "\nEXIT\n");
				
				return 0;
			default:
				fprintf(stderr, "\nMust be an int between 1 and 4\n");
		}
	}
	

}

float floatFill(){

	float m, n;
	srand(time(NULL));

	for(int a = 0; a < 12; a++){
	//	fprintf(stderr, "\nmonth\n");

		for(int b = 0; b < 7; b++){
		//	fprintf(stderr, "\nday of the week\n");

			for (int c = 0; c < 10; c++){
			//	fprintf(stderr, "\nregister #\n");

				for (int d = 0; d < 8; d++){

					n = (float)(rand() % 1000 + 1);
					m = (float)rand() / RAND_MAX;
					money[a][b][c][d] = n + m;
				//	fprintf(stderr, "\t %.2f", money[a][b][c][d]);
				}
			}
		}
	}			

}

float registerTotal(){
	int month, day, reg;
	float total = 0;

	fprintf(stderr, "\nEnter the month 0 - 11 (Jan - Dec), day 0 - 6 (Mon - Sun), and register number 0 - 9 in the following format\n");
	fprintf(stderr, "to print out the total of a specific register for the specified day of the month:\n");
	fprintf(stderr, "Month Day Register\n");
	scanf("%d %d %d", &month, &day, &reg);

	for (int d = 0; d < 8; d++){
		total += money[month][day][reg][d];
	}

fprintf(stderr, "\nTotal cash for the specified Month: %d, Day of the Week: %d, and Register Number: %d is $%.2f.\n", month, day, reg, total);	
}

float yearTotal(){
	float yearTotal = 0;

	for (int a = 0; a < 12; a++){
		for (int b = 0; b < 7; b++){
			for (int c = 0; c < 10; c++){
				for (int d = 0; d < 8; d++){

				yearTotal += money[a][b][c][d];
				}
			}
		} 
	}
fprintf(stderr, "\nTotal cash for the year: $%.2f\n.", yearTotal);
}

float monthTotal(){
	int month;
	float monthTotal = 0;

	fprintf(stderr, "\nEnter a month 0 - 11 (Jan - Dec) to get the total cash from all of the registers for the month.\n");
	scanf("%d", &month);

	for(int b = 0; b < 7; b++){
		for (int c = 0; c < 10; c++){
			for (int d = 0; d < 8; d++){

				monthTotal += money[month][b][c][d];
			}
		}
	}

fprintf(stderr, "\nThe total cash for month number %d is $%.2f.\n", month, monthTotal);
}
