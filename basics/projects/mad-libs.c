#include <stdio.h>
#include <string.h>

int main(){
    char noun[50] = "";
    char verb[50] = "";
    char adjective1[50] = "";
    char adjective2[50] = "";
    char adjective3[50] = "";

    printf("Mad Libs!\n\n")
    
    printf("Enter a noun (animal): ");
    fgets(noun, sizeof(noun), stdin);
    noun[strlen(noun)-1] = '\0';
    
    printf("Enter a verb (ending with -ing): ");
    fgets(verb, sizeof(verb), stdin);
    verb[strlen(verb)-1] = '\0';
    
    printf("Enter an adjective (description): ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1)-1] = '\0';
    
    printf("Enter an adjective (description): ");
    fgets(adjective2, sizeof(adjective2), stdin);
    adjective2[strlen(adjective2)-1] = '\0';
    
    printf("Enter an adjective (description): ");
    fgets(adjective3, sizeof(adjective3), stdin);
    adjective3[strlen(adjective3)-1] = '\0';
    
    printf("\nAt the zoo a %s %s escaped and started %s\n",adjective1,noun,verb);
    printf("The zookeeper shouted in a %s voice, but it didn't help\n",adjective2);
    printf("Tourists took %s selfies with it before it ran away",adjective3);

    return 0;
}