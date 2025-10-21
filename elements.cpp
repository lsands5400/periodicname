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

std::vector<std::string> Elements::getSymbList() {
    return symbList();
}


std::vector<std::string> Elements::getElemList() {
    return elemList();
}

std::vector<std::string> Elements::getSingleCharList(){
    return singleCharList();
}

std::vector<std::string> Elements::getDoubleCharList() {
    return doubleCharList();
}

std::vector<std::string> Elements::symbList() {
    std::vector<std::string> list;
    for (auto& pair : elementMap_) { 
        // Copies keys from elements map
        list.push_back(pair.first);   
    }
    return list;
}

std::vector<std::string> Elements::elemList() {
    std::vector<std::string> list;
    for (auto& pair : elementMap_) { 
        // Copies values from elements map
        list.push_back(pair.second);   
    }
    return list;
}

std::vector<std::string> Elements::singleCharList() {
    std::vector<std::string> list = symbList();
    std::vector<std::string> singleCharList;
    for (auto& i : list) {
        if(i.length() == 1) {
            singleCharList.push_back(i);
        }
    }
    return singleCharList;
}

std::vector<std::string> Elements::doubleCharList() {
    std::vector<std::string> list = symbList();
    std::vector<std::string> doubleCharList;
    for (auto& i : list) {
        if(i.length() == 2) {
            doubleCharList.push_back(i);
        }
    }
    return doubleCharList;
}