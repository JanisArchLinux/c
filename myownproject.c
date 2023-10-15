#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>




int main() {
    int option = 0;
    char abfrage;
    char gelesen;
    int commandExecuted = 0;
    char gelesenchar;
    char x;

    system("CHCP 1252");
    printf("\n");
    printf("\n");

    printf("\033[0;100m\033[34m");  // Set background to gray and font to blue
    printf("**********************************************************************\n");
    printf("*                                                                    *\n");
    printf("*                     Network Troubelshoot tool                      *\n");
    printf("*                                                                    *\n");
    printf("**********************************************************************\n");
    printf("\033[0m\n");  // Reset colors to default
    

    do {

        

        
        printf("Wählen sie eine option aus : \n\n");
        
        printf("\033[0;30m\033[47m"); // Setze Schrift auf Schwarz und Hintergrund auf Grau

        printf("  ************************************************************ \n");
        printf("  *                                                          * \n");
        printf("  *   [1]  - Option 1:  Show Network Info (ipconfig)         * \n");
        printf("  *   [2]  - Option 2:  Perform Ping Test (ping 8.8.8.8)     * \n");
        printf("  *   [3]  - Option 3:  DNS Lookup (nslookup)                * \n");
        printf("  *   [4]  - Option 4:  Show Network Statistics (netstat)    * \n");
        printf("  *   [5]  - Option 5:  Beschreibung hier                    * \n");
        printf("  *   [6]  - Option 6:  Read oout the stored wifi Pws        * \n");
        printf("  *   [7]  - Option 7:  Beschreibung hier                    * \n");
        printf("  *   [8]  - Option 8:  Beschreibung hier                    * \n");
        printf("  *   [9]  - Option 9:  Hacking                              * \n");
        printf("  *   [10] - Option 10: Beschreibung hier                    * \n");
        printf("  *                                                          * \n");
        printf("  ************************************************************ \n");
        printf("\033[0m");  // Reset colors to default
        
        
        

        printf("\n\nWelche Option möchten Sie wählen (Geben Sie die Nummer ein): ");
        gelesen = scanf("%d", &option);


        if (option == 1 && commandExecuted == 0) {
            // Run the ipconfig command
            system("ipconfig");
            commandExecuted = 1; // Mark the command as executed
        }
        else if (option == 2 && commandExecuted == 0) {
            system("ping 8.8.8.8");
            commandExecuted = 1; // Mark the command as executed
        }
        else if (option == 3 && commandExecuted == 0) {
            system("nslookup");
            commandExecuted = 1; // Mark the command as executed
        }
        else if (option == 4 && commandExecuted == 0) {
            system("netstat");
            commandExecuted = 1; // Mark the command as executed
        }
        else if (option == 5 && commandExecuted == 0) {
            system("netstat");
            commandExecuted = 1; // Mark the command as executed
        }
        else if (option == 6 && commandExecuted == 0) {
            mkdir("C:\\Wifilogs");
            system("netsh wlan export profile folder=C:\\Wifilogs key=clear");
            commandExecuted = 1; // Mark the command as executed
        }




        printf("\n\n\n\nMöchten Sie nochmals Das Network Troublesoot tool benutzen? ");
        printf("(");
        printf("\033[0;32m");
        printf("y");
        printf("\033[0m");
        printf("/");
        printf("\033[31m");
        printf("n");
        printf("\033[0m");
        printf(")");


        while (getchar() != '\n'); // Clear input buffer
        gelesenchar = scanf(" %c", &abfrage); // Read a character




        if (abfrage == 'y' || abfrage == 'Y') {
            commandExecuted = 0; // Reset the flag if the user wants to run the program again
        }
        else
            break;

            
        

    } while (abfrage == 'y');

    

    return 0;

  

}
