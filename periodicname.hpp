/**
 * \file periodicname.hpp
 * \author Lindsey Sands
 *
 * \brief Provides the interface definition for the PeriodicName class which
 *        converts strings into elemental symbols from the periodic table.
 *
 */

#ifndef PERIODICNAME_HPP_INCLUDED
#define PERIODICNAME_HPP_INCLUDED

#include <iostream>
#include <string>
#include <map>

/**
 * \class PeriodicName
 * \brief Converts strings into elemental symbols
 *
 * \details
 * Takes user input strings and converts them into their elemental symbol 
 * representation from the periodic table, if possible.
 * 
 *
 */

class PeriodicName {
    public:

    /**
     * \brief Disables default constructor
     */

    PeriodicName() = delete;

    /**
     * \brief Parameterized constructor for PeriodicName
     */

    PeriodicName(std::string input);

    /**
     * \brief Converts user input to elemental symbols
     */
    std::string strToSymb();

    /**
     * \brief Converts user input to full element names
     */
    std::string strToElem();

    private:
    std::string message_;
};

#endif // PeriodicName included