#include "Nonprofessionall.h"
Nonprofessional::Nonprofessional(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

double Nonprofessional::calculateWeeklySalary() {
    return hourlyRate * hoursWorked;
}

double Nonprofessional::calculateHealthCareContributions() {
    return hourlyRate * hoursWorked * 0.05; // 5% of weekly earnings for health care
}

int Nonprofessional::calculateVacationDays() {
    return hoursWorked / 40; // Assuming 40 hours of work per week for 1 day of vacation per week
}
