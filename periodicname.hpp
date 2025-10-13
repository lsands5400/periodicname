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
     * \brief Converts user input to 
     */
    PeriodicName strToSymb(std::string userInput);

    // Take in a string and find all of the characters/substrings that are elemental symbols and convert them


    private:
    std::map<std::string, std::string> elements = {
        {"Ac", "Actinium"}, {"Al", "Aluminum"}, {"Am", "Americium"}, {"Sb", "Antimony"},
        {"Ar", "Argon"}, {"As", "Arsenic"}, {"At", "Astatine"}, {"Ba", "Barium"},
        {"Bk", "Berkelium"}, {"Be", "Beryllium"}, {"Bi", "Bismuth"}, {"Bh", "Bohrium"},
        {"B", "Boron"}, {"Br", "Bromine"}, {"Cd", "Cadmium"}, {"Ca", "Calcium"},
        {"Cf", "Californium"}, {"C", "Carbon"}, {"Ce", "Cerium"}, {"Cs", "Cesium"},
        {"Cl", "Chlorine"}, {"Cr", "Chromium"}, {"Co", "Cobalt"}, {"Cn", "Copernicium"},
        {"Cu", "Copper"}, {"Cm", "Curium"}, {"Ds", "Darmstadtium"}, {"Db", "Dubnium"},
        {"Dy", "Dysprosium"}, {"Es", "Einsteinium"}, {"Er", "Erbium"}, {"Eu", "Europium"},
        {"Fm", "Fermium"}, {"Fl", "Flerovium"}, {"F", "Fluorine"}, {"Fr", "Francium"},
        {"Gd", "Gadolinium"}, {"Ga", "Gallium"}, {"Ge", "Germanium"}, {"Au", "Gold"},
        {"Hf", "Hafnium"}, {"Hs", "Hassium"}, {"He", "Helium"}, {"Ho", "Holmium"},
        {"H", "Hydrogen"}, {"In", "Indium"}, {"I", "Iodine"}, {"Ir", "Iridium"},
        {"Fe", "Iron"}, {"Kr", "Krypton"}, {"La", "Lanthanum"}, {"Lr", "Lawrencium"},
        {"Pb", "Lead"}, {"Li", "Lithium"}, {"Lv", "Livermorium"}, {"Lu", "Lutetium"},
        {"Mg", "Magnesium"}, {"Mn", "Manganese"}, {"Mt", "Meitnerium"}, {"Md", "Mendelevium"},
        {"Hg", "Mercury"}, {"Mo", "Molybdenum"}, {"Mc", "Moscovium"}, {"Nd", "Neodymium"},
        {"Ne", "Neon"}, {"Np", "Neptunium"}, {"Ni", "Nickel"}, {"Nh", "Nihonium"},
        {"Nb", "Niobium"}, {"N", "Nitrogen"}, {"No", "Nobelium"}, {"Og", "Oganesson"},
        {"Os", "Osmium"}, {"O", "Oxygen"}, {"Pd", "Palladium"}, {"P", "Phosphorus"},
        {"Pt", "Platinum"}, {"Pu", "Plutonium"}, {"Po", "Polonium"}, {"K", "Potassium"},
        {"Pr", "Praseodymium"}, {"Pm", "Promethium"}, {"Pa", "Protactinium"}, {"Ra", "Radium"},
        {"Rn", "Radon"}, {"Re", "Rhenium"}, {"Rh", "Rhodium"}, {"Rg", "Roentgenium"},
        {"Rb", "Rubidium"}, {"Ru", "Ruthenium"}, {"Rf", "Rutherfordium"}, {"Sm", "Samarium"},
        {"Sc", "Scandium"}, {"Sg", "Seaborgium"}, {"Se", "Selenium"}, {"Si", "Silicon"},
        {"Ag", "Silver"}, {"Na", "Sodium"}, {"Sr", "Strontium"}, {"S", "Sulfur"},
        {"Ta", "Tantalum"}, {"Tc", "Technetium"}, {"Te", "Tellurium"}, {"Tn", "Tennessine"},
        {"Tb", "Terbium"}, {"Tl", "Thallium"}, {"Th", "Thorium"}, {"Tm", "Thulium"},
        {"Sn", "Tin"}, {"Ti", "Titanium"}, {"W", "Tungsten"}, {"U", "Uranium"},
        {"V", "Vanadium"}, {"Xe", "Xenon"}, {"Yb", "Ytterbium"}, {"Y", "Yttrium"},
        {"Zn", "Zinc"}, {"Zr", "Zirconium"}
    };

    static const size_t NUM_OF_ELEMENTS = 118;

    /**
     * \brief Creates a list of only the symbols fromt the elements map
     */
    std::string symbList();

}

#endif // PeriodicName included