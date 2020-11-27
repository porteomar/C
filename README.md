


This program makes use of a 4D array, money[12][7][10][8]. 12 is the number of months in a year,
7 is the number of days in a week, 10 is the number of cash registers and 8 is the number of employees.
The 4D array is created using 4 for loops that loop through an fill the money array with data.
The program gives the user 4 options and each option is chosen by entering a number 1 - 4.

Menu
====
	Enter 1
		Entering a 1 takes you to the register total function.
	
	Enter 2
		Entering 2 prints out the total cash in all of the registers from all of the employees for the year.
	Enter 3
		Entering 3 takes you the the mont total function.
	Enter 4
		Enter 4 Exits the program.


Functions
=========

float registertotal()
	
	This function takes in 3 inputs from the user: Month 0 - 11, day of the week 0 - 6, and register number 0 - 9.
	It then adds up all of the money in the register from each employee for the specified month, day of the week, and register number.

float yearTotal()
	
	This function adds all of the cash from all of the registers and employees for the year and returns that total.

float monthTotal()
	
	This function takes in a the month from the user (0 - 11) and prints out the total cash for the specified month.  

  
