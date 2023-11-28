#include <stdio.h>

struct Employees {
    char name[XYZ];
    char password[*****];
};

struct Booking {
    int busNumber;
    int seatNumber;
    char passengerName[50];
    float payment;
    char bookingtime[10];
    char arrivaltime[10];
};

struct Bus {
    int busNumber;
    int totalSeats;
    char source[A];
    char destination[B];
    int availableSeats;
    int bookedSeats;
};

int main(void) {
    struct Employees login;
    struct addbus( );
    struct mofifybus( );
    struct deletebus( );
    struct viewAllbuses( );
    struct searchbuses( );
    struct book seats( );
    struct issueticket( );
    struct cancelbooking( );
    struct viewBookingHistory( );Writing a complete C code for a capstone project is beyond the scope of a single response. However, I can provide you with a basic structure to get you started. Please note that this is a simplified example, and you may need to expand and modify it based on your specific project requirements.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for Employee, Bus, Booking, and Booking History
struct Employee {
    char username[20];
    char password[20];
};

struct Bus {
    int busID;
    char source[50];
    char destination[50];
    // Add other details as needed
};

struct Booking {
    int bookingID;
    int busID;
    char customerName[50];
    int seatNumber;
    // Add other details as needed
};

struct BookingHistory {
    int bookingID;
    char customerName[50];
    char source[50];
    char destination[50];
    // Add other details as needed
};

// Function prototypes
void employeeLogin();
void addBus();
void modifyBus();
void deleteBus();
void viewAllBuses();
void searchBuses();
void bookSeat();
void issueTicket();
void cancelBooking();
void viewBookingHistory();
void saveData();
void loadData();

// Global arrays to store data
struct Employee employees[10];
struct Bus buses[50];
struct Booking bookings[100];
struct BookingHistory bookingHistory[100];
int employeeCount = 0;
int busCount = 0;
int bookingCount = 0;
int historyCount = 0;

int main() {
    loadData();  // Load existing data from files

    int choice;

    do {
        printf("\n----- Bus Reservation System Menu -----\n");
        printf("1. Employee Login\n");
        printf("2. Bus Information Management\n");
        printf("3. Booking Management\n");
        printf("4. Booking History\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                employeeLogin();
                break;
            case 2:
                // Call functions for bus information management
                break;
            case 3:
                // Call functions for booking management
                break;
            case 4:
                // Call functions for booking history
                break;
            case 5:
                saveData();  // Save data to files before exiting
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// Implement functions for bus information management, booking management, and booking history
// ...

// Implement functions for employee login, file handling, and other auxiliary functions
// ...
```

This is a basic framework, and you need to fill in the details of each function according to your project requirements. Remember to handle data validation, file I/O operations, and any additional features you may want to include.
    struct Booking book;
    struct Bus customer;

    printf("Employees name: ");
    fgets(employee.name, sizeof(employee.name), stdin);
    printf("Employees password: ");
    fgets(employee.password, sizeof(employee.password), stdin);

    printf("Enter passenger name: ");
    fgets(book.passengerName, sizeof(book.passengerName), stdin);
    printf("Enter seat number booked: ");
    scanf("%d", &book.seatNumber);

    printf("Enter paid amount: ");
    scanf("%f", &book.payment);
    if (book.payment <= 1000) {
        printf("NOT ENOUGH MONEY");
        return 1; // Exit with an error code
    } else {
        printf("YOU ARE GOOD TO GO");
    }

    printf("Enter time of booking: ");
    scanf(" %9s", book.bookingtime);
    printf("Enter time of arrival: ");
    scanf(" %9s", book.arrivaltime);

    printf("Enter Bus number: ");
    scanf("%d", &customer.busNumber);
    printf("Enter total number of seats in the bus: ");
    scanf("%d", &customer.totalSeats);

    printf("Enter starting point or source: ");
    scanf(" %49[^\n]", customer.source);
    printf("Enter destination: ");
    scanf(" %49[^\n]", customer.destination);

    printf("Enter booked seats: Writing a complete C code for a capstone project is beyond the scope of a single response. However, I can provide you with a basic structure to get you started. Please note that this is a simplified example, and you may need to expand and modify it based on your specific project requirements.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structures for Employee, Bus, Booking, and Booking History
struct Employee {
    char username[20];
    char password[20];
};

struct Bus {
    int busID;
    char source[50];
    char destination[50];
    // Add other details as needed
};

struct Booking {
    int bookingID;
    int busID;
    char customerName[50];
    int seatNumber;
    // Add other details as needed
};

struct BookingHistory {
    int bookingID;
    char customerName[50];
    char source[50];
    char destination[50];
    // Add other details as needed
};

// Function prototypes
void employeeLogin();
void addBus();
void modifyBus();
void deleteBus();
void viewAllBuses();
void searchBuses();
void bookSeat();
void issueTicket();
void cancelBooking();
void viewBookingHistory();
void saveData();
void loadData();

// Global arrays to store data
struct Employee employees[10];
struct Bus buses[50];
struct Booking bookings[100];
struct BookingHistory bookingHistory[100];
int employeeCount = 0;
int busCount = 0;
int bookingCount = 0;
int historyCount = 0;

int main() {
    loadData();  // Load existing data from files

    int choice;

    do {
        printf("\n----- Bus Reservation System Menu -----\n");
        printf("1. Employee Login\n");
        printf("2. Bus Information Management\n");
        printf("3. Booking Management\n");
        printf("4. Booking History\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                employeeLogin();
                break;
            case 2:
                // Call functions for bus information management
                break;
            case 3:
                // Call functions for booking management
                break;
            case 4:
                // Call functions for booking history
                break;
            case 5:
                saveData();  // Save data to files before exiting
                printf("Exiting the program. Thank you!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 5);

    return 0;
}

// Implement functions for bus information management, booking management, and booking history
// ...

// Implement functions for employee login, file handling, and other auxiliary functions
// ...
```

This is a basic framework, and you need to fill in the details of each function according to your project requirements. Remember to handle data validation, file I/O operations, and any additional features you may want to include.");
    scanf("%d", &customer.bookedSeats);

    customer.availableSeats = customer.totalSeats - customer.bookedSeats;
    printf("Available seats=%d\n", customer.availableSeats);

    printf("*****BOOKING PAGE******\n");
    printf("Employee doing the booking name = %s", employee.name);
    printf("Clients name = %s", book.passengerName);
    printf("Paid amount = %f\n", book.payment);
    printf("Clients Booking time = %s\n", book.bookingtime);
    printf("Clients Bus number = %d\n", customer.busNumber);
    printf("Clients Seat Number = %d\n", book.seatNumber);
    printf("Client is Travelling from: %s  To: %s\n", customer.source, customer.destination);

    return 0;
}