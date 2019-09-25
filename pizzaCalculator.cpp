// Copyright (c) 2019 myself All rights reserved.
//
// Created by: Matsuru Hoshi
// Created on: Sept 2019
// This is program calculates price of pizza

#include <iostream>

int main() {
    // This will calculate price pizza
    const float MATERIALS = 0.5;
    const float RENT = 1;
    const float LABOUR = 0.75;
    const float HST = 0.13;
    int welcome;
    int diameter;
    double subTotal;
    double total;

    // Welcome statement
    std::cout << "Welcome, this is Pizza Calculator 1000!" << std::endl;
    std::cout << "Press Enter to continue." << std::endl;
    std::cin.ignore();

    // input
    std::cout << "What is the diameter of your pizza (in): " << std::endl;
    std::cin >> diameter;

    // process
    subTotal = (diameter * MATERIALS) + RENT + LABOUR;
    total = subTotal + (subTotal * HST);

    // output
    std::cout << "\nThe price is: $" << total << std::endl;
}
