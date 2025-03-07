/*
Problem: A hotel has 5 rooms available. 

    The system should:
        Allow customers to book a room if available.
        Allow cancellation of a booked room.
        Show the status of all rooms.
        Exit when needed.

    Requirements:
        Use an array to track room status.
        Use loops for input validation.
        Use switch-case for menu navigation.
*/

#include <stdio.h>

#define TOTAL_ROOMS 5

int main() {
    int rooms[TOTAL_ROOMS] = {0}; // 0 = Available, 1 = Booked
    int choice, roomNumber;
    char moreAction = 'y';

    printf("Welcome to the Hotel Booking System\n");

    while (moreAction == 'y' || moreAction == 'Y') {
        printf("\nMenu:\n");
        printf("1. Book a Room\n");
        printf("2. Cancel Booking\n");
        printf("3. View Room Status\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Available Rooms: ");
                for (int i = 0; i < TOTAL_ROOMS; i++) {
                    if (!rooms[i]) {
                        printf("%d ", i + 1);
                    }
                }
                printf("\nEnter room number to book: ");
                scanf("%d", &roomNumber);

                if (roomNumber >= 1 && roomNumber <= TOTAL_ROOMS && !rooms[roomNumber - 1]) {
                    rooms[roomNumber - 1] = 1;
                    printf("Room %d booked successfully!\n", roomNumber);
                } else {
                    printf("Invalid room number or already booked!\n");
                }
                break;

            case 2:
                printf("Enter room number to cancel: ");
                scanf("%d", &roomNumber);

                if (roomNumber >= 1 && roomNumber <= TOTAL_ROOMS && rooms[roomNumber - 1]) {
                    rooms[roomNumber - 1] = 0;
                    printf("Room %d booking cancelled!\n", roomNumber);
                } else {
                    printf("Invalid room number or not booked!\n");
                }
                break;

            case 3:
                printf("Room Status: ");
                for (int i = 0; i < TOTAL_ROOMS; i++) {
                    printf("\nRoom %d: %s", i + 1, rooms[i] ? "Booked" : "Available");
                }
                printf("\n");
                break;

            case 4:
                printf("Thank you for using our system!\n");
                return 0;

            default:
                printf("Invalid choice! Try again.\n");
        }

        printf("Do you want another action? (y/n): ");
        scanf(" %c", &moreAction);
    }

    return 0;
}