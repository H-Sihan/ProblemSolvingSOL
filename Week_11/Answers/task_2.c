/*
    Task 2: Read a file using functions
    
        Your programme should read and display the content of a file. The steps are:

            Open an existing file "output.txt" in read mode.
            Read and display its contents character by character.
            Implement a function void readFromFile(const char *filename) for reading.
            If the file does not exist, print an appropriate error message.
*/
#include <stdio.h>

// Function to read file content
void readFromFile(const char *filename) {
    FILE *fptr = fopen(filename, "r"); // Open file in read mode
    char ch;

    if (fptr == NULL) {
        printf("Error opening file!\n");
        return;
    }

    printf("File Content:\n");

    // Read and print character by character
    while ((ch = fgetc(fptr)) != EOF) {
        putchar(ch);
    }

    fclose(fptr); // Close file
}

int main() {
    // Call function to read file
    readFromFile("output.txt");
    return 0;
}
