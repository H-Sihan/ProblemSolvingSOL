/*
A library wants to automate book borrowing. 

    The system should:
        Allow users to borrow up to 3 books.
        Show a menu of available books.
        Prevent borrowing if a book is already borrowed by someone else.
        Allow users to return books.
        Show the list of borrowed books at the end.
    
    Requirements:
        Use an array to track books.
        Use if-else and while-loop to manage books.
        Use switch-case for menu options.
*/
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 5
#define MAX_BORROW 3

int main() {
    char books[MAX_BOOKS][20] = {"C Programming", "Data Structures", "AI Basics", "Networking", "Cyber Security"};
    int borrowed[MAX_BOOKS] = {0};  // 0 = Available, 1 = Borrowed
    int borrowedCount = 0, choice, bookID;
    char moreAction = 'y';

    printf("Welcome to the Library\n");

    while (moreAction == 'y' || moreAction == 'Y') {
        printf("\nMenu:\n");
        printf("1. Borrow a Book\n");
        printf("2. Return a Book\n");
        printf("3. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (borrowedCount >= MAX_BORROW) {
                    printf("You have reached the maximum borrow limit (3 books).\n");
                    break;
                }

                printf("Available Books:\n");
                for (int i = 0; i < MAX_BOOKS; i++) {
                    if (!borrowed[i]) {
                        printf("%d. %s\n", i + 1, books[i]);
                    }
                }

                printf("Enter the book number to borrow: ");
                scanf("%d", &bookID);
                bookID--;

                if (bookID >= 0 && bookID < MAX_BOOKS && !borrowed[bookID]) {
                    borrowed[bookID] = 1;
                    borrowedCount++;
                    printf("You borrowed \"%s\" successfully!\n", books[bookID]);
                } else {
                    printf("Invalid choice or book already borrowed.\n");
                }
                break;

            case 2:
                printf("Enter the book number to return: ");
                scanf("%d", &bookID);
                bookID--;

                if (bookID >= 0 && bookID < MAX_BOOKS && borrowed[bookID]) {
                    borrowed[bookID] = 0;
                    borrowedCount--;
                    printf("You returned \"%s\" successfully!\n", books[bookID]);
                } else {
                    printf("Invalid choice or book not borrowed.\n");
                }
                break;

            case 3:
                printf("Thank you for using the library system!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }

        printf("Do you want another action? (y/n): ");
        scanf(" %c", &moreAction);
    }

    printf("Thank you for using the library system!\n");
    return 0;
}