/* Anatomy of C program
- data and data types
- compile time and runtime arrays
- loops
- branching
- functions 
*/

// include statement - standard input / output libraries
#include <stdio.h>
// function prototype for test()
void test(int value);

/*
* Always start with main
*/


int main (int argc, char** argv) {
	// Reserved program memory	
	// array of 10^6 integers - compile time array
	int data[1000000];
	// Call function test() passing it a value of 5	
	test(5);
	// end of main function
	printf("The end of main\n");
}

// this function retuens nothing (i.e, void)
// and takes one parameter and integer (called value)
void test(int value){
	//A branch using a fore loop
	if(value > 10){
		printf("That is a big number()\n");
	}
	

	// A for() loop
	//counting element
	for(int i = 0; i < 10; i++){
		// code the loop executes
		printf("Hello from the loop\n");
	}
	// end of function statement 
	printf("The end of the function\n");
}

