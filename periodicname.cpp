/**
 * \file periodicname.cpp
 * \author Lindsey Sands
 *
 * \brief Implements the PeriodicName class
 *
 */

#include "periodicname.hpp"
#include "elements.hpp"

#include <iostream>
#include <string>
#include <map>
#include <cctype>


PeriodicName::PeriodicName(std::string input) 
    : message_{input} {
}

std::string PeriodicName::strToSymb() {
    // Step 1: Check to see if the letters J and Q are in the input string.
    // These letters do not exist on the periodic table, so the code will
    // throw an error.
    if ((message_.find("J") != std::string::npos) 
        || (message_.find("Q") != std::string::npos)) {
        throw std::out_of_range("Unable to convert, invalid letters entered.");
    }
    
    for (auto& i : message_) {
        if (elements_.find(message_[i])) {

        }
    }
    // Step 2: Second base case to check if the singular letter is not 
    // found alone on the periodic table. 

    // Step 3: Check each letter, ignoring spaces, to see if it can be an 
    // elemental symbol by itself or with the one next to it. If it cannot 
    // for either check the character before to make sure it is not 
    // unnecessarily alone. Add the symbol string to the final string 
    // accordingly

}


std::string PeriodicName::strToElem() {

}



