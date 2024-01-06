#include <stdio.h>
#define TOTAL_SEATS 50
int seats[TOTAL_SEATS] = {0}; // 0 represents an available seat, 1 represents a booked seat
void displaySeats() {
    printf("Available Seats:\n");
    for (int i = 0; i < TOTAL_SEATS; i++) {
        if (seats[i] == 0) {
            printf("Seat %d is available\n", i + 1);
        }
    }
}
void bookSeat(int seatNumber) {
    if (seatNumber < 1 || seatNumber > TOTAL_SEATS) {
        printf("Invalid seat number\n");
        return;
    }
    if (seats[seatNumber - 1] == 0) {
        seats[seatNumber - 1] = 1;
        printf("Seat %d booked successfully!\n", seatNumber);
    } else {
        printf("Seat %d is already booked. Please choose another seat.\n", seatNumber);
    }
}
int main() {
    int choice, seatNumber;
    do {
        printf("\n1. Display available seats\n");
        printf("2. Book a seat\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                displaySeats();
                break;
            case 2:
                printf("Enter the seat number you want to book: ");
                scanf("%d", &seatNumber);
                bookSeat(seatNumber);
                break;
            case 3:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 3);
    return 0;
}














