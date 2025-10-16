#include <map>
#include <string>
#include "elements.hpp"

std::string symbList[NUM_OF_ELEMENTS];
std::string elemList[NUM_OF_ELEMENTS];

/**
 * \brief Creates an array of only the symbols from the elements map
 */
std::string symbList() {
        for (auto& i : elements_) { 
            // Copies keys from elements map
            symbList[i] = i.first;   
        }
}

/**
 * \brief Creates an array of only the element names from the elements map
 */
std::string elemList() {
    std::string elemList[NUM_OF_ELEMENTS]; 
    for (auto& i : elements_) {
        // Copies values from elements map
        elemList[i] = i.second;
    }
}

std::string singleCharList() {
    std::string symbList = symbList();
    for (auto& i : symblist()) {

    }
}

std::string doubleCharList() {

}