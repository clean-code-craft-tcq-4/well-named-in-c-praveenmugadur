#ifndef TESTCOLORPAIR_H
#define TESTCOLORPAIR_H

#include "colorcode.h"

extern void testNumberToPair(int pairNumber,    MajorColor_type expectedMajor,     MinorColor_type expectedMinor);
extern void testPairToNumber(     MajorColor_type major,     MinorColor_type minor,     int expectedPairNumber);

#endif
