// Copyright (c) 2025 Luke Di Bert All rights reserved.
//
// Created by: Luke Di Bert
// Date: March 25, 2025
// Checks if number is positive, negative or zero

// adds iostream library
#include <iostream>

int main() {
// int for storing user number
    int userInt;
// prompts user for int and stores it in variable
    std::cout << "Enter a number: ";
    std::cin >> userInt;
// checks if user number is positive, negative or 0 and displays a message
    if (userInt > 0)
        std::cout << "Your number is positive" << std::endl;
    else if (userInt < 0)
        std::cout << "Your number is negative" << std::endl;
    else
        std::cout << "Your number is 0" << std::endl;
}
