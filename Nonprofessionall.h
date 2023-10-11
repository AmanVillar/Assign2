#pragma once
#ifndef NONPROFESSIONALL_H
#define NONPROFESSIONALL_H
#include "Employee.h"

class Nonprofessional : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Nonprofessional(double rate, int hours);
    double calculateWeeklySalary();
    double calculateHealthCareContributions();
    int calculateVacationDays();
};

#endif
