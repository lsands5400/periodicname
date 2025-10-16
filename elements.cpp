/**
 * \file elements.cpp
 * \author Lindsey Sands
 *
 * \brief Implements the Elements class
 *
 */

#include "elements.hpp"

#include <map>
#include <string>


Elements::Elements() {
}

std::string getSymbList();

std::string getElemList();

std::string getSingleCharList();

std::string getDoubleCharList();

std::string Elements::symbList() {
        for (auto& i : elementMap_) { 
            // Copies keys from elements map
            symbList[i] = i.first;   
        }
}

std::string Elements::symbList() {
        for (auto& i : elementMap_) { 
            // Copies keys from elements map
            symbList[i] = i.first;   
        }
}

std::string Elements::elemList() {
    std::string elemList[NUM_OF_ELEMENTS]; 
    for (auto& i : elementMap_) {
        // Copies values from elements map
        elemList[i] = i.second;
    }
    return elemList;
}

std::string Elements::singleCharList() {
    std::string symbList = symbList();
    for (auto& i : symblist()) {

    }
}

std::string Elements::doubleCharList() {

}