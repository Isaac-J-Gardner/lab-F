#include <stdio.h>
int main(int argc, char *argv[]){
    
	
	if (argc != 2){
        printf("Error. Expected 1 filename.");
        return 1;
    }

    FILE *fptr;
	fptr = fopen(argv[1], "r");

    if (fptr == NULL){
        printf("Error. Cannot open requested file.");
        return 1;
    }
	
	
	// Read number from file - do not edit
	double num;
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	fscanf(fptr, "%lf", &num);
	fclose(fptr);
	

	// Enter your code from Lab D to print JSON output (with name, email, number1, number2) goes under here
    printf("{\"name\": \"Isaac Gardner\",\n \"email\": \"isaac.gardner-2@student.manchester.ac.uk\",\n \"number1\": %.2f,\n \"number2\": %.3e}", num, num);
	

	// Do not edit below here
	return 0;
}