#include <iostream>
#include <vector>
#include "customer.h"

using namespace std;

// proyotype functions's declaration

void readCustomer (vector <Customer>& customers);// '&' for changing original date when it passed
void readVehicles (vector <Vehicle>& vehicles);
void calculateSales (vector <Vehicle>& vehicles);

int main() {
    vector <Customer> customers;
    vector <Vehicle> vehicles;
    
    
    
    
    
    
//Calling functions    
    readCustomers (customers); 
    readVehicles (vehicles);
    calculateSales (vehicles);
    
// Display vehicle info

for(int i=0; i < vehicles.size(); ++i){ 
    vehicles[i].displayInfo();
    
    
/*cout << "Customer Types: \n";
cout << "1 - Interested: Customers who are inmterested in purchasing vehicles\";
cout << "2 - Bought: Customers who have already purchased vehicles \";

int customerType;
cout << "What type of Customer? (1-2): ";
cin >> customerType;*/
}

//Display customer info
for (const Customer& customer: customers) {
    customerDisplayInfo (customerType);
}


return 0;

}