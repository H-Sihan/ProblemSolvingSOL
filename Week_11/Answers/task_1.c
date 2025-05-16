/*
    Task 1: Create and write to a file using functions
        You need to create a file and write user-input text into it. 
        
        Your programme should:

            Ask the user to enter a line of text.
            Store the text inside a file named "output.txt".
            Implement a function void writeToFile
                (const char filename, const char text) to perform file operations.
            Display a success message after writing to the file.
*/

#include <stdio.h>

// Function to write text to a file
void writeToFile(const char *filename, const char *text) {
    FILE *fptr = fopen(filename, "w"); // Open file in write mode

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fprintf(fptr, "%s", text); // Write text to file
    fclose(fptr); // Close file

    printf("Data written to %s successfully.\n", filename);
}

int main() {
    char text[100];

    // Get user input
    printf("Enter text to write to file: ");
    fgets(text, sizeof(text), stdin);

    // Call function to write data
    writeToFile("output.txt", text);

    return 0;
}

