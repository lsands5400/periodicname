#
# Makefile for PeriodicName
#

## Makefile variables
#
# Using variables simplifies changing compiler options and adding new
# executables.
#
#  - CXX: the C++ compiler to use
#  - CPPFLAGS: flags to pass to the C preprocessor
#  - CXXFLAGS: flags to pass to the compiler
#  - LDFLAGS: flags to pass to the linker
#  - TARGETS: names of all the targets in the executables section below

CXX = clang++
CPPFLAGS =
CXXFLAGS = -g -std=c++20 -pedantic -Wall -Wextra
LDFLAGS =
TARGETS = periodicname

## Phony Targets (These are not actually files to build)

all: $(TARGETS)

clean: 
	rm -f *.o $(TARGETS)
# ^--- important, that's a tab, NOT spaces! true for all build commands

# Magic variables explained:
#   $@ is the target (left side of the colon)
#   $< is the first prerequisite (right side of the colon)
#   $^ is all of the prerequisites (right side of the colon)

## Targets to build object files

main.o: main.cpp periodicname.hpp elements.hpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

periodicname.o: periodicname.cpp periodicname.hpp elements.hpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

elements.o: elements.cpp elements.hpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

## Targets to build executables
#
#
# Note that we don't put the libraries in LDFLAGS because not all
# executables need the same libraries -- if everything needed the same
# libraries, we'd list them in LDFLAGS instead.

periodicname: periodicname.o main.o elements.o
	$(CXX) $(LDFLAGS) -o $@ $^ 
