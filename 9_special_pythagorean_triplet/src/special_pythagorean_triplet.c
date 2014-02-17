#include <stdio.h>
#include <math.h>

#define SQUARED 2

int main(){


	int a = 0;
	int b = 0;
	int c = 0;
	int found = 0;

	for(a = 1; a < 1000 && !(found); a++){
		for( b = 1; b < 1000 && !(found); b++){
			for( c = 1; c< 1000 && !(found); c++){
				if(((a + b + c) == 1000) && (pow(a, SQUARED) + pow(b, SQUARED) == pow(c, SQUARED))){
					found = 1;
				}
			}
		}
	}
	a--;
	b--;
	c--;


	printf("The product of a, b, and c, of the pythagorean triplet whose sum is equal to 100 is: %d\n", (a * b * c));

	return 0;
}
