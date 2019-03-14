#include <iostream>
#include <string>

#include "notes.h"
#include "interval.h"

GenericInterval::GenericInterval(Note root, int number)
: _root(root), _number(number)
{
}

Note const GenericInterval::root()
{
    return _root;
}

int const GenericInterval::number()
{
    return _number;
}

std::string GenericInterval::secondNote()
{
    int rootvalue = static_cast<int>(root());

    int secondNote = (rootvalue + intervalAdjustment + number()) % noteCardinality;

    return noteName(secondNote);
}

std::string GenericInterval::ordinalSuffix()
{
    return "th"; // Lazy inaccurate way for now.
}

void GenericInterval::print()
{
    std::cout << "A generic " << number() << ordinalSuffix() << " from " << noteName(root()) << " is " << secondNote() << std::endl;
}
