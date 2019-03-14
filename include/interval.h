#ifndef INTERVAL_H
#define INTERVAL_H

#include "notes.h"

class GenericInterval
{
public:
    /* When two notes are identical, the interval is a first, not a zeroth.
     * The intervalAdjustment allows the math to work out by adjusting a first
     * to a "zeroth." */
    const int intervalAdjustment = -1;
    const int noteCardinality = 7;

    GenericInterval(Note root, int number);
    Note const root();
    int const number();
    std::string secondNote();
    std::string ordinalSuffix();
    void print();

private:
    Note _root;
    int _number;
};

#endif
