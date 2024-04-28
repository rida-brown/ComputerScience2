#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Vehicle {
    int year;
    string make;
    string model;
    string color;
    double price;
};

int main() {
    // Creating a vector of vehicles
    vector<Vehicle> vehicles = {
        {2022, "Toyota", "Camry", "Red", 25000.00},
        {2021, "Honda", "Civic", "Blue", 22000.00},
        {2023, "Ford", "Mustang", "Black", 35000.00}
    };

    // Looping through each vehicle and displaying its information
    for (int i = 0; i < vehicles.size(); ++i) {
        cout << "Vehicle " << i + 1 << ":\n";
        cout << "    Year: " << vehicles[i].year << "\n";
        cout << "    Make: " << vehicles[i].make << "\n";
        cout << "    Model: " << vehicles[i].model << "\n";
        cout << "    Color: " << vehicles[i].color << "\n";
        cout << "    Price: $" << vehicles[i].price << "\n";
        cout << "\n";
    }

    return 0;
}
