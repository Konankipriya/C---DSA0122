#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Base class for Ticket
class Ticket {
protected:
    string name;
    int seatNumber;
    bool booked;
    float price;

public:
    Ticket() : name(""), seatNumber(0), booked(false), price(0.0) {}

    // Getter function for price
    float getPrice() const {
        return price;
    }
    
    virtual void display() const = 0;

    bool isBooked() const {
        return booked;
    }

    void book(const string& name, float price) {
        this->name = name;
        this->price = price;
        booked = true;
    }

    void cancel() {
        name = "";
        booked = false;
    }
};

// Derived class for SeatTicket
class SeatTicket : public Ticket {
public:
    SeatTicket(int seatNumber, float price) {
        this->seatNumber = seatNumber;
        this->price = price;
    }

    void display() const override {
        if (!booked) {
            cout << "Seat " << seatNumber << " is available\n";
        } else {
            cout << "Seat " << seatNumber << " is booked by " << name << " for $" << getPrice() << "\n";
        }
    }
};

// Class to manage the ticket reservation system
class ReservationSystem {
private:
    vector<Ticket*> tickets;

public:
    ReservationSystem(int numSeats, float price) {
        // Initialize the tickets with seat numbers and mark them as not booked
        for (int i = 0; i < numSeats; ++i) {
            tickets.push_back(new SeatTicket(i + 1, price));
        }
    }

    ~ReservationSystem() {
        for (size_t i = 0; i < tickets.size(); ++i) {
            delete tickets[i];
        }
        tickets.clear();
    }

    // Method to display available seats
    void displayAvailableSeats() const {
        cout << "+---------------------+\n";
        cout << "| Available Seats     |\n";
        cout << "+---------------------+\n";
        for (size_t i = 0; i < tickets.size(); ++i) {
            if (!tickets[i]->isBooked()) {
                tickets[i]->display();
            }
        }
        cout << "+---------------------+\n";
    }

    // Method to book a ticket
    void bookTicket(const string& name, int seatNumber) {
        if (seatNumber < 1 || seatNumber > tickets.size()) {
            cout << "Invalid seat number!\n";
            return;
        }

        Ticket* ticket = tickets[seatNumber - 1];
        if (ticket->isBooked()) {
            cout << "Seat " << seatNumber << " is already booked!\n";
        } else {
            ticket->book(name, ticket->getPrice());
            cout << "Ticket booked successfully for seat " << seatNumber << " at price $" << ticket->getPrice() << "\n";
        }
    }

    // Method to display booking details
    void displayBookingDetails(int seatNumber) const {
        if (seatNumber < 1 || seatNumber > tickets.size()) {
            cout << "Invalid seat number!\n";
            return;
        }

        tickets[seatNumber - 1]->display();
    }

    // Method to cancel a ticket
    void cancelTicket(int seatNumber) {
        if (seatNumber < 1 || seatNumber > tickets.size()) {
            cout << "Invalid seat number!\n";
            return;
        }

        Ticket* ticket = tickets[seatNumber - 1];
        if (!ticket->isBooked()) {
            cout << "Seat " << seatNumber << " is not booked yet.\n";
        } else {
            ticket->cancel();
            cout << "Ticket for seat " << seatNumber << " has been canceled.\n";
        }
    }
};

int main() {
    // Initialize reservation system with 10 seats and a price of $50 per ticket
    ReservationSystem reservationSystem(10, 50);

    int choice;
    do {
        // Display menu
        cout << "\nMenu:\n";
        cout << "+---------------------+\n";
        cout << "| 1. Display available seats |\n";
        cout << "| 2. Book a ticket          |\n";
        cout << "| 3. Show booking details   |\n";
        cout << "| 4. Cancel a ticket        |\n";
        cout << "| 5. Exit                   |\n";
        cout << "+---------------------+\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                reservationSystem.displayAvailableSeats();
                break;
            case 2: {
                string name;
                int seatNumber;
                cout << "Enter your name: ";
                cin >> name;
                cout << "Enter the seat number you want to book: ";
                cin >> seatNumber;
                reservationSystem.bookTicket(name, seatNumber);
                break;
            }
            case 3: {
                int seatNumber;
                cout << "Enter the seat number for which you want to see booking details: ";
                cin >> seatNumber;
                reservationSystem.displayBookingDetails(seatNumber);
                break;
            }
            case 4: {
                int seatNumber;
                cout << "Enter the seat number you want to cancel the booking for: ";
                cin >> seatNumber;
                reservationSystem.cancelTicket(seatNumber);
                break;
            }
            case 5:
                cout << "Exiting program. Thank you for using the reservation system!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter again.\n";
        }
    } while (choice != 5);

    return 0;
}
