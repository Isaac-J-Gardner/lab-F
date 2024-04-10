// Includes
#include <stdio.h>
#include <string.h>
#include "domains.h"


// Main function 
int main(void) {
    
    // Read user input
    #define LEN 4
    char user_input[LEN];
    printf("Enter a domain including the . (e.g. .uk): ");
    fgets(user_input, LEN, stdin);
    
	
    // Enter your code under here
    if (user_input[0] != '.'){
        printf("Error! The first character entered should be a .");
        return 0;
    }

    for (int i = 0; i < 258; i++){
        if (strcmp(user_input, country_codes[i].domain) == 0){
            printf("This is the domain for: ");
            printf("%s", country_codes[i].country);
            return 0;
        }
    }
    printf("Domain not found.");

    return 0;
}