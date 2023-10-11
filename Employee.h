#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {
public:
    virtual double calculateWeeklySalary() = 0;
    virtual double calculateHealthCareContributions() = 0;
    virtual int calculateVacationDays() = 0;
};

#endif
