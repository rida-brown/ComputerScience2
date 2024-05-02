#ifndef VEHICLE_H
# define VEHICLE_H
#include <string>

using namespace std;

class Vehicle {
    private: 
       int year;
       string make;
       string model;
       string color;
       int timeLot;
       double price;
    public:
       
       Vehicle(int year, string make, string model, string color, double price) {
           this-> year = year;
           this-> make = make;
           this-> model = model;
           this-> color = color;
           this -> timeLot = timeLot
           this-> price = price;
       } 
       void displayInfo() {
           cout << "Vehicle: " << make << ", " << model <<  ", " << year << ", " << color << ", $" << price << endl;
       
       }
       
       int getYear();
       string getMake();
       string getModel();
       string getColor();
       double getPrice();
       
       Vehicle();
       
};

#endif
