#include "car.h"

// Constructor
Car::Car(const std::string& make, const std::string& model, int year) : make(make), model(model) {
    std::cout << "Car constructed: " << make << " of model " << model << " made in " << year << std::endl;
}

// Copy Constructor
Car::Car(const Car& other) : name(other.name), speed(other.speed) {
    std::cout << "Car copy constructed: " << name << " with speed " << speed << std::endl;
}

// Copy Assignment Operator
Car& Car::operator=(const Car& other) {
    if (this == &other) {
        return *this; // handle self assignment
    }
    name = other.name;
    speed = other.speed;
    std::cout << "Car assigned: " << name << " with speed " << speed << std::endl;
    return *this;
}

// Destructor
Car::~Car() {
    std::cout << "Car destructed: " << name << std::endl;
}

// Getter and Setter for name
std::string Car::getName() const {
    return name;
}

void Car::setName(const std::string& name) {
    this->name = name;
}

// Getter and Setter for speed
int Car::getSpeed() const {
    return speed;
}

void Car::setSpeed(int speed) {
    this->speed = speed;
}

// Display the car details
void Car::display() const {
    std::cout << "Car: " << name << ", Speed: " << speed << std::endl;
}

int main() {
    // Create a car object
    Car car1("", 100);
    /* car1.display();

    // Use copy constructor
    Car car2 = car1;
    car2.display();

    // Use copy assignment operator
    Car car3;
    car3 = car1;
    car3.display();

    // Modify car3 details
    car3.setName("Porsche");
    car3.setSpeed(230);
    car3.display(); */

    return 0;
}
