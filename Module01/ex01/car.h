#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string name;
    int speed;

public:
    // Constructor
    Car(const std::string& name = "", int speed = 0);

    // Copy Constructor
    Car(const Car& other);

    // Copy Assignment Operator
    Car& operator=(const Car& other);

    // Destructor
    ~Car();

    // Getter and Setter for name
    std::string getName() const;
    void setName(const std::string& name);

    // Getter and Setter for speed
    int getSpeed() const;
    void setSpeed(int speed);

    // Display the car details
    void display() const;
};

#endif // CAR_H
