#ifndef NOTES_H
#define NOTES_H

enum class Note {A, B, C, D, E, F, G};

std::string noteName(Note noteEnumValue);
std::string noteName(int noteValue);

#endif
