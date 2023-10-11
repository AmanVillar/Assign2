#pragma once
#ifndef PROFESSIONALL_H
#define PROFESSIONALL_H
#include "Employee.h"

class Professional : public Employee {
private:
    double monthlySalary;
    int vacationDays;

public:
    Professional(double salary, int days);
    double calculateWeeklySalary();
    double calculateHealthCareContributions();
    int calculateVacationDays();
};

#endif
