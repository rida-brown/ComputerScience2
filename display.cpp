#include <iostream>
#include <vector>
#include <string>
using namespace std;


void readCustomer (vector <Customer>& customers);
void readVehicles (vector <Vehicle>& vehicles);
void calculateSales (vector <Vehicle>& vehicles);

int main() {
    // Creating a vector of vehicles
    vector<Vehicle> vehicles = {
        {2022, "Toyota", "Camry", "Red", 25000.00},
        {2021, "Honda", "Civic", "Blue", 22000.00},
        {2023, "Ford", "Mustang", "Black", 35000.00}
    };

    // Looping through each vehicle and displaying its information
    for (int i = 0; i < vehicles.size(); ++i) {
        
    }

    return 0;
}
