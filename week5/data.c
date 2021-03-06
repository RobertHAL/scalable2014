/* C program that 
- fills and array with data 
- computes the average
- the computes the variance
 
*/

// include statement - standard input / output libraries and Standard Libraries (for rand())
#include <stdio.h>
#include <stdlib.h>


// function prototypes
double calcAve(int darray[], long unsigned int arrSize);
double calcVar(int darray[], long unsigned int arraySize, double avg);

/*
 * Always start with main
 */


int main (int argc, char** argv) {
	// Reserved program memory	
	// array of 10^6 integers - compile time array
	double calcAverage;
	double calcVarience;
	int data[1000000];
	for (int i = 0; i < 1000000; i++){
		data[i] = rand()%100;
	}

	// Call function test() passing it a value of 5	
	calcAverage = calcAve(data, 1000000);
	// end of main function
	printf("%f \n", calcAverage);
	calcVarience = calcVar(data, 1000000, calcAverage);
	printf("%f \n", calcVarience);
	
}

/*
 *
 * this function retuns a double for accurate precision
 * and takes two parameters and array of data and the number of elements in the array
 */
double calcAve(int darray[], long unsigned int arrSize){
	
	double valSum = 0;
	
	
	
	// A for() loop that sums the elements in the array
	
	for(int i = 0; i < arrSize; i++){
		valSum = valSum + darray[i];
	}
	printf("%f \n", valSum);
	printf("%lu \n", arrSize);
	// end of function statement 
	printf("The end of the function return the average as an int\n");
	return(valSum/arrSize);
}


/*
 * calcVar()
 *
 * This function calculates the Variance 
 * or The average of the squared differences from the Mean.
 *
 */

double calcVar(int darray[], long unsigned int arraySize, double avg){
	
	double diff;
  	double varSum = 0;
	for(int i = 0; i < arraySize; i++){
		// Subtract the mean(average) from each element of the array
		diff = darray[i] - avg;
		// add the square of the differernce from the mean to previous squares of differences
		varSum = varSum + (diff * diff);		
		
	}
	// return the sum of the sum of the squares of the differences 
	// divide by the number of elements in the array
	return(varSum/arraySize); 
}

