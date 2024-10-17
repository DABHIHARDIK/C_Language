#include <stdio.h>
#include <string.h>

#define MAX_ROOMS 5

struct Room {
    int number;
    int isBooked;
    char customerName[50];
    float payment; // New field to store payment amount
};

// Function to display room information
void displayRooms(struct Room rooms[]) {
    printf("\nRoom Status:\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        if (rooms[i].isBooked) {
            printf("Room %d: Booked by %s, Payment: %.2f\n", rooms[i].number, rooms[i].customerName, rooms[i].payment);
        } else {
            printf("Room %d: Available\n", rooms[i].number);
        }
    }
}

// Function to book a room
void bookRoom(struct Room rooms[]) {
    int roomNumber;
    float payment;
    printf("Enter room number to book (1-%d): ", MAX_ROOMS);
    scanf("%d", &roomNumber);

    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    if (rooms[roomNumber - 1].isBooked) {
        printf("Room %d is already booked.\n", roomNumber);
    } else {
        printf("Enter customer name: ");
        scanf("%s", rooms[roomNumber - 1].customerName);
        printf("Enter payment amount: ");
        scanf("%f", &payment);
        
        rooms[roomNumber - 1].isBooked = 1;
        rooms[roomNumber - 1].payment = payment; // Store the payment
        printf("Room %d booked successfully with payment of %.2f.\n", roomNumber, payment);
    }
}

// Function to cancel a room booking
void cancelBooking(struct Room rooms[]) {
    int roomNumber;
    printf("Enter room number to cancel (1-%d): ", MAX_ROOMS);
    scanf("%d", &roomNumber);

    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {
        printf("Invalid room number.\n");
        return;
    }

    if (!rooms[roomNumber - 1].isBooked) {
        printf("Room %d is not booked.\n", roomNumber);
    } else {
        rooms[roomNumber - 1].isBooked = 0;
        strcpy(rooms[roomNumber - 1].customerName, "");
        rooms[roomNumber - 1].payment = 0.0; // Reset the payment
        printf("Room %d booking cancelled.\n", roomNumber);
    }
}

int main() {
    struct Room rooms[MAX_ROOMS];

    // Initialize rooms
    for (int i = 0; i < MAX_ROOMS; i++) {
        rooms[i].number = i + 1;
        rooms[i].isBooked = 0;
        strcpy(rooms[i].customerName, "");
        rooms[i].payment = 0.0; // Initialize payment to 0
    }

    int choice;
    do {
        printf("\nHotel Management System\n");
        printf("1. Display Rooms\n");
        printf("2. Book Room\n");
        printf("3. Cancel Booking\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                displayRooms(rooms);
                break;
            case 2:
                bookRoom(rooms);
                break;
            case 3:
                cancelBooking(rooms);
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}