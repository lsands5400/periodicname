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
#include <vector>


Elements::Elements() {
}

std::string getSymbList() {
    return symbList();
}


std::string getElemList() {
    return elemList();
}

std::vector<std::string> getSingleCharList(){
    return singleCharList();
}

std::vector<std::string> getDoubleCharList() {
    return doubleCharList();
}

std::string Elements::symbList() {
    std::string symbList[NUM_OF_ELEMENTS];
    for (auto& i : elementMap_) { 
        // Copies keys from elements map
        symbList[i] = i.first;   
    }
    return symbList;
}

std::string Elements::elemList() {
    std::string elemList[NUM_OF_ELEMENTS]; 
    for (auto& i : elementMap_) {
        // Copies values from elements map
        elemList[i] = i.second;
    }
    return elemList;
}

std::vector<std::string> Elements::singleCharList() {
    std::string symbList = symbList();
    std::vector<std::string> singleCharList;
    for (auto& i : symbList) {
        if(symbList[i].length == 1) {
            singleCharList[i] = symbList[i];
        }
    }
    return singleCharList;
}

std::vector<std::string> Elements::doubleCharList() {
    std::string symbList = symbList();
    std::vector<std::string> doubleCharList;
    for (auto& i : symbList) {
        if(symbList[i].length == 2) {
            doubleCharList[i] = symbList[i];
        }
    }
    return doubleCharList;
}