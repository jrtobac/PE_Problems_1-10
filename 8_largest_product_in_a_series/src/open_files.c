#include <stdio.h>

int main()
{

	/*Create a char to read in file contents*/
	char ch;

	/*Create a pointer to the FILE structure included in stdio.h*/
	FILE *fp;

	/*open the file in read mode*/
	fp = fopen("100_digit_number","r");	

	/*check if the file has been opened curretly*/
	if(fp == NULL){
		printf("Error while openeing the file\n");
		return 0;
	}

	
	/* Read in the file */
	while((ch = fgetc(fp)) != EOF )
		printf("%c", ch);

	/*close the file*/
	fclose(fp);	
	
	return 0;
}
