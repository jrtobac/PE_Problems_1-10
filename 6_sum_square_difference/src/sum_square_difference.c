#include <stdio.h>
#include <math.h>
#include <inttypes.h>

#define SQUARED 2

int main(){
		
	uint64_t uint64_sum_squared = 0;
	uint64_t uint64_square_sum = 0;
	uint64_t uint64_difference = 0;
	int int_i = 0;
	int int_sum = 0;

	/* find the square sum */
	for(int_i = 1; int_i < 101; int_i++){
		uint64_square_sum += pow(int_i, SQUARED);
	}

	/* find the sum squared */
	for(int_i = 1; int_i < 101; int_i++){
		int_sum += int_i;
	}
	uint64_sum_squared = pow(int_sum, SQUARED);

	/* find the difference */
	uint64_difference = uint64_sum_squared - uint64_square_sum ;
	
	printf("The difference between the sum of the squares of the first one hundred natural numbers, and the square of the sum is %" PRIu64 "\n", uint64_difference);	
	
	return 0;
}

