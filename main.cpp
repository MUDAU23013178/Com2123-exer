#include <iostream>
using namespace std;

int main() {
    double merchandiseCost, employeesSalary, yearlyRent, electricityCost, totalExpenses, desiredProfit, totalSales, markupPercentage, discountedSales;
    cout << "Enter the total cost of merchandise: ";
    cin >> merchandiseCost;
    cout << "Enter the total salary of employees (including yours): ";
    cin >> employeesSalary;
    cout << "Enter the yearly rent: ";
    cin >> yearlyRent;
    cout << "Enter the estimated electricity cost: ";
    cin >> electricityCost;
    totalExpenses = merchandiseCost + employeesSalary + yearlyRent + electricityCost;
    desiredProfit = 0.10 * merchandiseCost;
    totalSales = totalExpenses + desiredProfit;
    discountedSales = totalSales / 0.85;
    markupPercentage = (discountedSales - merchandiseCost) / merchandiseCost * 100;

    cout << "The merchandise should be marked up by approximately " << markupPercentage << "%." << endl;

    return 0;
}


