#include "Professionall.h"

Professional::Professional(double salary, int days) : monthlySalary(salary), vacationDays(days) {}

double Professional::calculateWeeklySalary() {
    return monthlySalary / 4.0; // Assuming a month has 4 weeks
}

double Professional::calculateHealthCareContributions() {
    return monthlySalary * 0.1; // 10% of monthly salary for health care
}

int Professional::calculateVacationDays() {
    return vacationDays;
}

