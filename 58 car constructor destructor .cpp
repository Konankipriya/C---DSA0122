#include <iostream>
#include <string>

class Car {
private:
    std::string brand;
    std::string model;
    int year;

public:
    Car(const std::string& carBrand, const std::string& carModel, int carYear)
        : brand(carBrand), model(carModel), year(carYear) {
        std::cout << "A " << year << " " << brand << " " << model << " car has been created." << std::endl;
    }
    ~Car() {
        std::cout << "The " << year << " " << brand << " " << model << " car is being destroyed." << std::endl;
    }
    void drive() {
        std::cout << "Driving the " << year << " " << brand << " " << model << " car." << std::endl;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022);
    Car anotherCar("Honda", "Civic", 2020);
    myCar.drive();
    anotherCar.drive();

    return 0;
}
