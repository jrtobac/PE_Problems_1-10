#include <stdio.h>

int main()
{

	/*Create a char to read in file contents*/
	char ch;

	int otdn[1000];
	int i= 0;
	int gp = 0;
	int product = 0;

	/*Create a pointer to the FILE structure included in stdio.h*/
	FILE *fp;

	/*open the file in read mode*/
	fp = fopen("1000_digit_number","r");	

	/*check if the file has been opened curretly*/
	if(fp == NULL){
		printf("Error while openeing the file\n");
		return 0;
	}

	
	/* Read in the file */
	for(i=0; (ch = fgetc(fp)) != EOF; ){
		printf("%c", ch);
		if(ch != '\n'){
			otdn[i] = ch - '0';
			printf("array: %d\n", otdn[i]);
			i++;
		}
	}

	/*close the file*/
	fclose(fp);

	/* find the greatest product */
	for(i=0; i<996; i++){
		if ((product = otdn[i] * otdn[i+1] * otdn[i+2] * otdn[i+3] * otdn[i+4]) > gp){
			gp = product;	
		}
	}	

	printf("The greatest product of five consecutive digits in the 1000-digit number inside the 1000-digit number file is %d\n", gp);
	
	return 0;
}
