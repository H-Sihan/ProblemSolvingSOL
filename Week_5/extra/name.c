#include <stdio.h>
#include <string.h>

// Define patterns for each letter A-Z (5x5 block)
const char *letters[26][5] = {
    {"____", " * * ", "*****", "*   *", "*   *"},  // A
    {"**** ", "*   *", "**** ", "*   *", "**** "},  // B
    {" *** ", "*   *", "*    ", "*   *", " *** "},  // C
    {"**** ", "*   *", "*   *", "*   *", "**** "},  // D
    {"*****", "*    ", "**** ", "*    ", "*****"},  // E
    {"*****", "*    ", "**** ", "*    ", "*    "},  // F
    {" *** ", "*    ", "*  **", "*   *", " *** "},  // G
    {"*   *", "*   *", "*****", "*   *", "*   *"},  // H
    {" *** ", "  *  ", "  *  ", "  *  ", " *** "},  // I
    {"  ***", "   * ", "   * ", "*  * ", " **  "},  // J
    {"*   *", "*  * ", "**   ", "*  * ", "*   *"},  // K
    {"*    ", "*    ", "*    ", "*    ", "*****"},  // L
    {"*   *", "** **", "* * *", "*   *", "*   *"},  // M
    {"*   *", "**  *", "* * *", "*  **", "*   *"},  // N
    {" *** ", "*   *", "*   *", "*   *", " *** "},  // O
    {"**** ", "*   *", "**** ", "*    ", "*    "},  // P
    {" *** ", "*   *", "* * *", "*  * ", " ** *"},  // Q
    {"**** ", "*   *", "**** ", "*  * ", "*   *"},  // R
    {" ****", "*    ", " *** ", "    *", "**** "},  // S
    {"*****", "  *  ", "  *  ", "  *  ", "  *  "},  // T
    {"*   *", "*   *", "*   *", "*   *", " *** "},  // U
    {"*   *", "*   *", "*   *", " * * ", "  *  "},  // V
    {"*   *", "*   *", "* * *", "** **", "*   *"},  // W
    {"*   *", " * * ", "  *  ", " * * ", "*   *"},  // X
    {"*   *", " * * ", "  *  ", "  *  ", "  *  "},  // Y
    {"*****", "   * ", "  *  ", " *   ", "*****"}   // Z
};

//https://patorjk.com/

int main() {
    char name[20];

    // Get the user's name
    printf("Enter your name: ");
    scanf("%s", name);

    int len = strlen(name);

    // Print the name in stars row by row
    for (int row = 0; row < 5; row++) {  // 5 rows for each letter
        for (int i = 0; i < len; i++) {  // Loop through each letter
            char ch = name[i];

            // Convert lowercase to uppercase
            if (ch >= 'a' && ch <= 'z') {
                ch -= 32;
            }

            // Print the corresponding letter pattern or spaces for unsupported characters
            if (ch >= 'A' && ch <= 'Z') {
                printf("%s  ", letters[ch - 'A'][row]);
            } else {
                printf("     "); // Space for unsupported characters
            }
        }
        printf("\n"); // Move to the next line after printing all letters
    }

    return 0;
}