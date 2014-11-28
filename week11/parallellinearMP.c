/*
 * parallelinearMP.C
 * compile with
 * gcc -lm -fopenmp parallellinearMP.c
 */
#include <omp.h>
#include <stdio.h>
#include <stdlib.h>

#define false 0
#define true 1


int search_key = 0;
int* search_array;
int key_found = false;
int search_size;

int main (int argc, char *argv[])
{
   printf("Enter the search key >> ");
   scanf("%d", &search_key);

   printf("Enter the search size >> ");
   scanf("%d", &search_size);

   search_array = (int *) malloc(sizeof(int)*search_size);

   for(int j = 0; j < search_size; j++) {
     search_array[j] = rand() % search_size;
   }

   /*
    * call the search function
    */
  #pragma omp parallel for
  for (int i = 0; i < search_size; i++){
	printf("tid = %d\n",omp_get_thread_num());
	printf("%d\n",search_array[i]);
	if(key_found==false){	
		if(search_array[i] == search_key){
			printf("Key found at position %d\n", i);
			key_found=true;
			i = search_size;
		}
	} 
  }

  return 0;
}
