#ifndef notes_h
#define notes_h

#include <iostream>
#include <string>

enum class Note {A, B, C, D, E, F, G};

std::string noteName(Note noteEnumValue)
{
    std::string note;

    switch (noteEnumValue)
    {
        case Note::A:
            note = "A";
            break;
        case Note::B:
            note = "B";
            break;
        case Note::C:
            note = "C";
            break;
        case Note::D:
            note = "D";
            break;
        case Note::E:
            note = "E";
            break;
        case Note::F:
            note = "F";
            break;
        case Note::G:
            note = "G";
            break;
    }

    return note;
}

std::string noteName(int noteValue)
{
    std::string note;

    switch (noteValue)
    {
        case static_cast<int>(Note::A):
            note = "A";
            break;
        case static_cast<int>(Note::B):
            note = "B";
            break;
        case static_cast<int>(Note::C):
            note = "C";
            break;
        case static_cast<int>(Note::D):
            note = "D";
            break;
        case static_cast<int>(Note::E):
            note = "E";
            break;
        case static_cast<int>(Note::F):
            note = "F";
            break;
        case static_cast<int>(Note::G):
            note = "G";
            break;
    }

    return note;
}
#endif
