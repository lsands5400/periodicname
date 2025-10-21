/**
 * \file main.cpp
 * \author Lindsey Sands
 *
 * \brief Main function for PeriodicName converter
 *
 */

#include "periodicname.hpp"
#include "elements.hpp"
#include <string>
#include <iostream>

void main() {
    // Testing elements class
    Elements elements;
    auto output = elements.getSingleCharList();
    for (int i;  i = 0; i++) {
        std::cout << output[i];
    }
    // std::cout << "Enter the message to convert";
    // std::string input;
    // std::cin >> input; 
    // PeriodicName userOutput = PeriodicName(input);
    // std::string product = userOutput.strToSymb;
    // std::cout << product;
}
