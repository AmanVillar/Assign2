#include "Professionall.h"
#include "Nonprofessionall.h"
#include <iostream>
using namespace std;

int main() {
    Professional prof(5000.0, 10);
    Nonprofessional nonprof(12.0, 50);

    // Calculate and print information for professional employee
    cout << "Professional Employee: " << endl;
    cout << "Weekly Salary: $" << prof.calculateWeeklySalary() << endl;
    cout << "Health Care Contributions: $" << prof.calculateHealthCareContributions() << endl;
    cout << "Vacation Days: " << prof.calculateVacationDays() << endl;

    // Calculate and print information for nonprofessional employee
    cout << "Nonprofessional Employee: " << endl;
    cout << "Weekly Salary: $" << nonprof.calculateWeeklySalary() << endl;
    cout << "Health Care Contributions: $" << nonprof.calculateHealthCareContributions() << endl;
    cout << "Vacation Days: " << nonprof.calculateVacationDays() << endl;

    return 0;
}
