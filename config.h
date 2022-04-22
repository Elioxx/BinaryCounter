#ifndef CONFIG_H
#define CONFIG_H

#include <QList>

// Maker pHat rev1.1
const QList<int> LEDS = {18, 22, 12, 19}; // Output pins
const QList<int> BUTTONS = {21, 16, 20}; // Input pins
enum  {DOWN, RESET, UP};

// Chip configuration Raspberry specific
const int LFLAGS = 0;
const int CHIP = 0;

// Update interval for reading pin state
const int T_UPDATE = 100; //  ms

#endif // CONFIG_H
