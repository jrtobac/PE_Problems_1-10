#include <stdio.h>
#include "is_prime.h"

#define TWO_MILLION 2000000


int main()
{
        unsigned long int num = 3;
        unsigned long int sum = 2;

        for(num = 3; num <= TWO_MILLION; num += 2){
		if(is_prime(num)){
                        sum+=num;
			printf("at num: %lu sum: %lu\n", num, sum);
                }
        }

        printf("The sum of the primes below two million is %lu\n", sum);

        return 0;

}

