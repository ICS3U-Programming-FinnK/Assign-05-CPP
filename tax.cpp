// Created by: Finn Kitor
// Created on: December 1st, 2023
// This program asks the user for the subtotal and the tax in precentage

#include <iostream>
#include <stdexcept>
// Function: tax. Parameters: subtotal, and total. (both float)
float tax(float subtotal, float total) {
    // Checking if the subtotal or total is negative
    if (subtotal < 0 || total < 0) {
        throw std::invalid_argument("Error: subtotal or total cannot be negative");
    }  // Calculating the tax percentage
    float tax_percentage = ((total - subtotal) / subtotal) * 100;
    return tax_percentage;
}
// Int main function
int main() {
    try {
        float subtotal, total;
        // Getting input from the user
        std::cout << "Please enter the subtotal in CAD$: ";
        std::cin >> subtotal;
        std::cout << "Please enter the total cost in CAD$: ";
        std::cin >> total;
        // Calculating the tax percentage
        float tax_percentage = tax(subtotal, total);
        // Displaying the tax percentage to the user
        std::cout << "The tax percentage is: " << tax_percentage << "%" << std::endl;
        // Invalid input responce to user
    } catch (std::invalid_argument& e) {
        std::cout << "Error: Invalid input: " << e.what() << std::endl;
    }
    return 0;
}
