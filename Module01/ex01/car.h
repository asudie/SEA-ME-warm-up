#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;

public:
    // Constructor
    Car(const std::string& make = "", std::string& model = "", int year = 0);

    // Copy Constructor
    Car(const Car& other);

    // Copy Assignment Operator
    Car& operator=(const Car& other);

    // Destructor
    ~Car();

    // Getter and Setter for name
    std::string getMake() const;
    void setMake(const std::string& model);

    std::string getModel() const;
    void setModel(const std::string& model);

    // Getter and Setter for speed
    int getYear() const;
    void setYear(int year);

    // Display the car details
    void display() const;
    void drive() const;
};

#endif // CAR_H
