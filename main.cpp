#include <iostream>
#include <vector>
#include "customer.h"
#include "vehicle.h"

using namespace std;

// proyotype functions's declaration

void readCustomer (vector <Customer>& customers);// '&' for changing original date when it passed
void readVehicles (vector <Vehicle>& vehicles);
void calculateSales (vector <Vehicle>& vehicles);

int main() {
    vector <Customer> customers;
    vector <Vehicle> vehicles;
    
 Vehicle car1(2014, "Toyota", "Camry", "green", 14000.00);
 car1.displayInfo();

for(int i=0; i < vehicles.size(); ++i){ 
    vehicles[i].displayInfo();


return 0;

}
