// Copyright © 2015, Battelle National Biodefense Institute (BNBI);
// all rights reserved. Authored by: Brian Ondov, Todd Treangen,
// Sergey Koren, and Adam Phillippy
//
// See the LICENSE.txt file included with this software for license information.

#ifndef INCLUDED_CommandInfo
#define INCLUDED_CommandInfo

#include "Command.h"
#include "Sketch.h"
#include "SketchFingerPrint.h"

namespace mash {

class CommandInfo : public Command
{
public:
    
    CommandInfo();
    
    int run() const; // override
    
private:
	
	int printCounts(const Sketch & sketch) const;
    int writeJson(const Sketch & sketch) const;


	int printFingerPrintCounts(const SketchFingerPrint & sketch) const;
    int writeFingerPrintJson(const SketchFingerPrint & sketch) const;
};

} // namespace mash

#endif
