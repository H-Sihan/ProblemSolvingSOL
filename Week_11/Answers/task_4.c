/*
    Task 4: Merge two files into one
        Your task is to merge the contents of two files into a new file. The programme should:

            Open "file1.txt" and "file2.txt", read their contents.
            
            Merge their contents into "merged.txt" (file2's content 
                should appear after file1’s).

            Implement a function void mergeFiles(const char file1, 
                const char file2, const char *mergedFile).

            Display a success message after merging.
*/
#include <stdio.h>

// Function to merge two files
void mergeFiles(const char *file1, const char *file2, const char *mergedFile) {
    FILE *fptr1 = fopen(file1, "r");
    FILE *fptr2 = fopen(file2, "r");
    FILE *out = fopen(mergedFile, "w");
    char ch;

    if (fptr1 == NULL || fptr2 == NULL || out == NULL) {
        printf("Error opening files!\n");
        return;
    }

    // Copy file1 content
    while ((ch = fgetc(fptr1)) != EOF) {
        fputc(ch, out);
    }

    // Add newline for separation
    fputc('\n', out);

    // Copy file2 content
    while ((ch = fgetc(fptr2)) != EOF) {
        fputc(ch, out);
    }

    fclose(fptr1);
    fclose(fptr2);
    fclose(out);

    printf("Files merged into %s successfully.\n", mergedFile);
}

int main() {
    mergeFiles("file1.txt", "file2.txt", "merged.txt");
    return 0;
}
