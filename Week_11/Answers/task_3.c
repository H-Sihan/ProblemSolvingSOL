/*
    Task 3: Copy content from one file to another
        Your task is to copy the content of one file to another. The programme should:

            Create "source.txt" file in existing code directory, 
                provide basic detail over there related to Module.

            Read content from "source.txt".
            Copy it exactly into "destination.txt".
            Implement void copyFile(const char source, const char destination) 
                to handle copying.
                
            If "source.txt" does not exist, print an error message.
*/
#include <stdio.h>

// Function to copy file content
void copyFile(const char *source, const char *destination) {
    FILE *src = fopen(source, "r");
    FILE *dest = fopen(destination, "w");
    char ch;

    if (src == NULL || dest == NULL) {
        printf("Error opening file!\n");
        return;
    }

    // Read from source and write to destination
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);
    printf("File copied successfully from %s to %s\n", source, destination);
}

int main() {
    copyFile("source.txt", "destination.txt");
    return 0;
}
